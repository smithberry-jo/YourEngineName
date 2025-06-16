CMake


cmake_minimum_required(VERSION 3.10) # Or higher, depending on your CMake version

project(ArenaAscendantEngine VERSION 0.1.0)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17) # Or 20, 23
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Add your source directory
add_subdirectory(src)

# Configure GLFW
# Specify the path to GLFW include directory relative to CMakeLists.txt
include_directories(libs/glfw/include)

# Specify the path to GLFW library directory relative to CMakeLists.txt
# Adjust 'vc2022' and 'x64' if your Visual Studio version or architecture differs
link_directories(libs/glfw/lib-vc2022/x64) 

# Add the main executable
# Link the GLFW library. 'glfw3' is the common name for the library.
add_executable(${YourEngineName}Engine src/main.cpp) # Name your executable
target_link_libraries(${YourEngineName}Engine glfw3.lib)

# If you're building on Windows, you might need to specify the correct library name.
# It's often glfw3.lib or glfw3.dll. If you run into issues, check the /lib folder
# and specify the full name of the .lib file (e.g., 'glfw3.lib')
# You may also need to specify WIN32 for console applications if your target is GUI:
# add_executable(${PROJECT_NAME}Engine WIN32 src/main.cpp) # For GUI application without console
