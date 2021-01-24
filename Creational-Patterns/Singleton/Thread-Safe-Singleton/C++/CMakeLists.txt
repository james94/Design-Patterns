cmake_minimum_required(VERSION 3.11)
project(ThreadSafeSingleton)

include_directories(include/)

set(TS_SINGLETON_SRCS src/main.cpp src/ThreadSafeSingleton.cpp)

add_executable(ThreadSafeSingletonDemo ${TS_SINGLETON_SRCS})

target_link_libraries(ThreadSafeSingletonDemo PRIVATE pthread)
