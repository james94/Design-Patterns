cmake_minimum_required(VERSION 3.11)
project(Prototype)

include_directories(include/)

set(PROTOTYPE_SRC src/main.cpp)

add_executable(PrototypeDemo ${PROTOTYPE_SRC})
