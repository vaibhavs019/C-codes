cmake_minimum_required(VERSION 3.26)
project(Micro_8051)

set(CMAKE_CXX_STANDARD 23)

add_executable(Micro_8051 main.cpp
        Relay.c
        Led.c
        Buzzer.c)
