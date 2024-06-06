cmake_minimum_required(VERSION 3.10)

# Define the project name
project(Polimorfismo)

# Set the C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add the sources
set(SOURCES
    veiculo.cpp
    caminhao.cpp
    van.cpp
    main.cpp
)

# Add the executable
add_executable(Polimorfismo ${SOURCES})
