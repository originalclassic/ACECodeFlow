cmake_minimum_required(VERSION 3.28)
project(ACECodeFlow)

# Set the C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Define the static library
add_library(ACECodeFlow STATIC
        src/ACECodeFlow.cpp
)

# Include directories
target_include_directories(ACECodeFlow PUBLIC
        ${PROJECT_SOURCE_DIR}/include
)

# Optional: Define any specific compile options or definitions here
