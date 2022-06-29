cmake_minimum_required(VERSION 3.16)
project(Compiler VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(ENTRY_POINT ${CMAKE_CURRENT_SOURCE_DIR}/main.cpp)

set(FRONT_DIR ${CMAKE_CURRENT_SOURCE_DIR}/include)

set(BISON_INPUT ${CMAKE_CURRENT_SOURCE_DIR}/src/parser.y)
set(BISON_OUTPUT ${CMAKE_CURRENT_SOURCE_DIR}/src/parser.tab.cpp)
set(BISON_OUTPUT_HEAD ${CMAKE_CURRENT_SOURCE_DIR}/src/parser.tab.hpp)
set(BISON_OUTPUT_INCLUDE ${CMAKE_CURRENT_SOURCE_DIR}/include/parser.tab.hpp)

set(FLEX_INPUT ${CMAKE_CURRENT_SOURCE_DIR}/src/lex.l)
set(FLEX_OUTPUT ${CMAKE_CURRENT_SOURCE_DIR}/src/lex.yy.cpp)

add_custom_command(
        OUTPUT ${BISON_OUTPUT} ${BISON_OUTPUT_HEAD}
        COMMAND bison -d -o ${BISON_OUTPUT} ${BISON_INPUT} && mv ${BISON_OUTPUT_HEAD} ${BISON_OUTPUT_INCLUDE}
        DEPENDS ${BISON_INPUT}
)

add_custom_command(
        OUTPUT ${FLEX_OUTPUT}
        COMMAND flex -o ${FLEX_OUTPUT} ${FLEX_INPUT}
        DEPENDS ${FLEX_INPUT}
)

file(GLOB_RECURSE SOURCE_LIST "src/*.cpp")
message(STATUS "SOURCE_LIST = ${SOURCE_LIST}")

include_directories(${FRONT_DIR} ${BACK_DIR})

add_executable(Compiler ${ENTRY_POINT} ${SOURCE_LIST} ${BISON_OUTPUT} ${FLEX_OUTPUT})
