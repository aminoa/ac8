cmake_minimum_required(VERSION 3.22)
project(chip8_emu)

set(CMAKE_CXX_STANDARD 14)

add_executable(chip8_emu main.cpp chip8.cpp chip8.h)
