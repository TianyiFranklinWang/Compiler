import os
import subprocess

TEST_SAMPLE_DIR_ABS = "D:\\Projects\Compiler\\test\\test_sample"
EXE_DIR_ABS = "D:\\Projects\\Compiler\\cmake-build-debug\\Compiler.exe"

if __name__ == "__main__":
    test_samples = os.listdir(TEST_SAMPLE_DIR_ABS)
    for no, test_sample in enumerate(test_samples):
        print(f"[{no + 1}/{len(test_samples)}] Running on sample {test_sample}...")
        process = subprocess.Popen(f"{EXE_DIR_ABS} {TEST_SAMPLE_DIR_ABS}\\{test_sample}", shell=True)
        process.wait()
        print("\n")
