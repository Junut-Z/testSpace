#!/bin/bash

# Build script
echo "Building project..."

# Create build directory
mkdir -p build
cd build

# Configure and compile
g++ -o ../build/app ../main.cpp ../testDemo/*.cpp

echo "Build completed successfully!"