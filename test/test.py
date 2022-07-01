import os
import sys
import time
import subprocess

PROJECT_DIR = os.path.abspath(os.path.dirname(os.getcwd()))
TEST_SAMPLE_DIR = os.path.join(PROJECT_DIR, "test", "test_sample")
IO_DIR = os.path.join(PROJECT_DIR, "test", "io")
ELF_FILE = os.path.join(PROJECT_DIR, "cmake-build-release", "Compiler")
LIB_FILE = os.path.join(PROJECT_DIR, "lib", "libsysy.a")

AS_DIR = os.path.join(PROJECT_DIR, "test", "out", "assembly")
EE_DIR = os.path.join(PROJECT_DIR, "test", "out", "eeyore")
TG_DIR = os.path.join(PROJECT_DIR, "test", "out", "tiger")
ELF_DIR = os.path.join(PROJECT_DIR, "test", "out", "elf")


def read_file(file_path):
    with open(file_path, 'r') as f:
        content = f.readlines()
    return content


if __name__ == "__main__":
    print("Compiling...")
    start_time = time.time()
    process = subprocess.Popen(
        f"cmake -D CMAKE_BUILD_TYPE=Release  -G Ninja -S {PROJECT_DIR} -B {PROJECT_DIR}/cmake-build-release",
        shell=True)
    process.wait()
    process = subprocess.Popen(
        f"cmake --build {PROJECT_DIR}/cmake-build-release --target Compiler -j$(nproc)",
        shell=True)
    process.wait()
    print(f"Finish compile project in {time.time() - start_time}s\n")

    print("Testing...")

    pass_counter = 0
    failed_counter = 0
    running_failed_list = list()
    compiling_failed_list = list()

    test_samples = os.listdir(TEST_SAMPLE_DIR)
    input_files = [_ for _ in os.listdir(IO_DIR) if _.endswith(".in")]

    if not os.path.exists(AS_DIR):
        os.makedirs(AS_DIR)
    if not os.path.exists(EE_DIR):
        os.makedirs(EE_DIR)
    if not os.path.exists(TG_DIR):
        os.makedirs(TG_DIR)
    if not os.path.exists(ELF_DIR):
        os.makedirs(ELF_DIR)

    start_time = time.time()
    for no, test_sample in enumerate(test_samples):
        print(
            f"[{no + 1}/{len(test_samples)}] Running on sample {test_sample}..."
        )

        print(" - Generating assembly file...")
        output_file_path = os.path.join(AS_DIR, test_sample.split(".")[0] + ".S")
        process = subprocess.Popen(
            f"{ELF_FILE} -S {TEST_SAMPLE_DIR}/{test_sample} -o {output_file_path}", shell=True)
        process.wait()

        print(" - Compiling assembly file...")
        elf_output_file_path = os.path.join(ELF_DIR, test_sample.split(".")[0] + ".out")
        process = subprocess.Popen(
            f"riscv64-unknown-elf-gcc -march=rv32im -mabi=ilp32 {output_file_path} {LIB_FILE} -o {elf_output_file_path}",
            shell=True)
        process.wait()

        print(" - Executing...")
        if os.path.exists(elf_output_file_path):
            output_file_path = os.path.join(PROJECT_DIR, "test", "out.txt")
            standard_output_file_path = os.path.join(IO_DIR, test_sample[:-2] + "out")
            if test_sample[:-2] + "in" in input_files:
                input_file_path = os.path.join(IO_DIR, test_sample[:-2] + "in")
                process = subprocess.Popen(
                    f"qemu-riscv32 {elf_output_file_path} < {input_file_path} > {output_file_path}",
                    shell=True)
            else:
                process = subprocess.Popen(
                    f"qemu-riscv32 {elf_output_file_path} > {output_file_path}",
                    shell=True)
            process.wait()

            standard_outputs = read_file(standard_output_file_path)[:-1]
            outputs = read_file(output_file_path)
            if len(outputs) == 0 and len(standard_outputs) == 0:
                print("PASS!")
                pass_counter += 1
            else:
                err_flag = False
                for standard_output, output in zip(standard_outputs, outputs):
                    if standard_output.strip("\n") != output.strip("\n"):
                        err_flag = True
                        break
                if err_flag:
                    print("RUNNING FAILED!", file=sys.stderr)
                    failed_counter += 1
                    running_failed_list.append(test_sample)
                    print(f"standard: {standard_outputs}")
                    print(f"Yours: {outputs}")
                else:
                    print("PASS!")
                    pass_counter += 1
            os.remove(output_file_path)
        else:
            print("COMPILING FAILED!", file=sys.stderr)
            failed_counter += 1
            compiling_failed_list.append(test_sample)

        print(" - Generating eeyore file...")
        output_file_path = os.path.join(EE_DIR, test_sample.split(".")[0] + ".ee")
        process = subprocess.Popen(
            f"{ELF_FILE} -e {TEST_SAMPLE_DIR}/{test_sample} -o {output_file_path}", shell=True)
        process.wait()

        print(" - Generating tiger file...")
        output_file_path = os.path.join(TG_DIR, test_sample.split(".")[0] + ".tg")
        process = subprocess.Popen(
            f"{ELF_FILE} -t {TEST_SAMPLE_DIR}/{test_sample} -o {output_file_path}", shell=True)
        process.wait()

        print("\n")
    print(f"Finish all tests in {time.time() - start_time}s\n")
    print("--------------------Report--------------------")
    print(
        f"Passed samples: {pass_counter}/{len(test_samples)}\t Failed samples: {failed_counter}/{len(test_samples)}\t ",
        end="")
    print("Pass percentage: {:.2%}".format(pass_counter / len(test_samples)))
    print(f"Compiling Failed samples list: {compiling_failed_list}")
    print(f"Running Failed samples list: {running_failed_list}")
