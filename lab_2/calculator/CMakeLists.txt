cmake_minimum_required(VERSION 3.10)
project(Calculator)

add_library(calculator STATIC src/calculator.c)

target_include_directories(calculator PUBLIC include)

add_executable(calculator_exe src/main.c)

target_link_libraries(calculator_exe calculator)
