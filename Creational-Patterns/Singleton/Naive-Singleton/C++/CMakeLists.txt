cmake_minimum_required(VERSION 3.11)
project(NaiveSingleton)

include_directories(include/)

set(NSINGLETON_SRCS src/main.cpp src/NaiveSingleton.cpp)

add_executable(NaiveSingletonDemo ${NSINGLETON_SRCS})

# SOLVED ERROR: /usr/bin/ld: CMakeFiles/NaiveSingletonDemo.dir/src/main.cpp.o: in function `std::thread::thread<void (&)(), , void>(void (&)())':
# main.cpp:(.text._ZNSt6threadC2IRFvvEJEvEEOT_DpOT0_[_ZNSt6threadC5IRFvvEJEvEEOT_DpOT0_]+0x33): undefined reference to `pthread_create'
# collect2: error: ld returned 1 exit status
target_link_libraries(NaiveSingletonDemo PRIVATE pthread)
