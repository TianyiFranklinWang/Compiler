cmake_minimum_required(VERSION 3.20)
project(Compiler VERSION 0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(FLEX_INPUT ${CMAKE_CURRENT_SOURCE_DIR}/src/scanner.l)
set(FLEX_OUTPUT ${CMAKE_CURRENT_SOURCE_DIR}/src/scanner.cpp)

add_custom_command(
        OUTPUT ${FLEX_OUTPUT}
        COMMAND flex -o ${FLEX_OUTPUT} ${FLEX_INPUT}
        DEPENDS ${FLEX_INPUT}
)

add_executable(Compiler ${FLEX_OUTPUT})
