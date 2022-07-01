sudo cmake -D CMAKE_BUILD_TYPE=Release -G Ninja -S . -B ./cmake-build-release
sudo cmake --build ./cmake-build-release --target Compiler -j$(nproc)