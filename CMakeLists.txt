cmake_minimum_required(VERSION 3.20)
project(Compiler VERSION 0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(ENTRY_POINT ${CMAKE_CURRENT_SOURCE_DIR}/src/main.cpp)

set(BISON_INPUT ${CMAKE_CURRENT_SOURCE_DIR}/src/parser.y)
set(BISON_OUTPUT ${CMAKE_CURRENT_SOURCE_DIR}/src/parser.cpp)
set(BISON_OUTPUT_HEAD ${CMAKE_CURRENT_SOURCE_DIR}/src/parser.hpp)

set(FLEX_INPUT ${CMAKE_CURRENT_SOURCE_DIR}/src/scanner.l)
set(FLEX_OUTPUT ${CMAKE_CURRENT_SOURCE_DIR}/src/scanner.cpp)

add_custom_command(
        OUTPUT ${BISON_OUTPUT} ${BISON_OUTPUT_HEAD}
        COMMAND bison -d -o ${BISON_OUTPUT} ${BISON_INPUT}
        DEPENDS ${BISON_INPUT}
)

add_custom_command(
        OUTPUT ${FLEX_OUTPUT}
        COMMAND flex -o ${FLEX_OUTPUT} ${FLEX_INPUT}
        DEPENDS ${FLEX_INPUT}
)

add_executable(Compiler ${BISON_OUTPUT} ${FLEX_OUTPUT} ${ENTRY_POINT})
