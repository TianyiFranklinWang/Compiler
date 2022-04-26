import subprocess

TEST_SAMPLE_ABS = "D:\\Projects\Compiler\\test\\test_sample\\000_main.sy"
EXE_DIR_ABS = "D:\\Projects\\Compiler\\cmake-build-debug\\Compiler.exe"

if __name__ == "__main__":
    print(f"Running on sample 000_main.sy...")
    process = subprocess.Popen(f"{EXE_DIR_ABS} {TEST_SAMPLE_ABS}", shell=True)
    process.wait()
