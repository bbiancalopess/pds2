cmake_minimum_required(VERSION 3.10)

# Define the project name
project(Heranca)

# Set the C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Include directories
include_directories(includes)

# Add the sources
set(SOURCES
    src/estagiario.cpp
    src/funcionario.cpp
    src/regular.cpp
    src/gerente.cpp
    src/main.cpp
)

# Add the executable
add_executable(Heranca ${SOURCES})
