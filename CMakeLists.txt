cmake_minimum_required(VERSION 3.23)
project(SimpleExample)
set(CMAKE_CXX_STANDARD 23)
add_compile_options(/experimental:module)

add_executable(
        SimpleExample
        file/file.cppm
        hex/hex.cppm
        os/os.cppm
        helloworld/helloworld.cppm
        #        hello.ixx
        main.cpp
)