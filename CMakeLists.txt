cmake_minimum_required(VERSION 3.25)
project(partie_programmation C)

set(CMAKE_C_STANDARD 11)

add_executable(partie_programmation
        main.c
        htmlexport.c
        htmlexport.h)
