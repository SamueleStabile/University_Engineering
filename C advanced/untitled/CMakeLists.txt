cmake_minimum_required(VERSION 3.23)
project(untitled C)

set(CMAKE_C_STANDARD 99)

add_executable(untitled main.c TInfo.c TInfo.h TArray.c TArray.h TList.c TList.h TStack.c TStack.h TQueue.c TQueue.h)
