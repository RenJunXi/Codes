cmake_minimum_required(VERSION 3.19)
project(CUDA_Debug CUDA)

set(CMAKE_CUDA_STANDARD 14)

add_executable(CUDA_Debug main.cu)

set_target_properties(
        CUDA_Debug
        PROPERTIES
        CUDA_SEPARABLE_COMPILATION ON)