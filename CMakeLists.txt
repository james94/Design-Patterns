cmake_minimum_required(VERSION 3.11)
project(Design-Patterns-C++)

# Creational Patterns: 

# Naive Singleton Example
add_subdirectory("${CMAKE_CURRENT_SOURCE_DIR}/Creational-Patterns/Singleton/Naive-Singleton/C++")

# Thread-Safe Singleton Example
add_subdirectory("${CMAKE_CURRENT_SOURCE_DIR}/Creational-Patterns/Singleton/Thread-Safe-Singleton/C++")

# Prototype Example
add_subdirectory("${CMAKE_CURRENT_SOURCE_DIR}/Creational-Patterns/Prototype/Prototype/C++")
