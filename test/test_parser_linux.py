import subprocess

TEST_SAMPLE_ABS = "/root/project/test/test_sample/000_main.sy"
ELF_DIR_ABS = "/root/project/cmake-build-debug/Compiler"

if __name__ == "__main__":
    print(
        f"Running on sample 000_main.sy..."
    )
    process = subprocess.Popen(
        f"{ELF_DIR_ABS} {TEST_SAMPLE_ABS}", shell=True)
    process.wait()
