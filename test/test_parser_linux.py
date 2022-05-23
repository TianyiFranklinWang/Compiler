import subprocess

TEST_SAMPLE_ABS = "/home/circleci/project/test/test_sample/000_main.sy"
ELF_DIR_ABS = "/home/circleci/project/cmake-build-debug/Compiler"

if __name__ == "__main__":
    print(f"Running on sample 000_main.sy...")
    process = subprocess.Popen(f"sudo {ELF_DIR_ABS} {TEST_SAMPLE_ABS}",
                               shell=True)
    process.wait()
