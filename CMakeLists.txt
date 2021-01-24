cmake_minimum_required(VERSION 3.11)
project(Design-Patterns-C++)

# Creational Patterns: 

# Naive Singleton Example
add_subdirectory("${CMAKE_CURRENT_SOURCE_DIR}/Creational-Patterns/Singleton/Naive-Singleton/C++")

add_subdirectory("${CMAKE_CURRENT_SOURCE_DIR}/Creational-Patterns/Singleton/Thread-Safe-Singleton/C++")