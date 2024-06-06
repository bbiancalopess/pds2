cmake_minimum_required(VERSION 3.10)

# Define the project name
project(Grafo)

# Set the C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Include directories
include_directories(grafo.hpp)

# Add the sources
set(SOURCES
    grafo.cpp
    main.cpp
)

# Add the executable
add_executable(Grafo ${SOURCES})
