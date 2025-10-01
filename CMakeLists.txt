# Must be part of every single base CMakeLists.txt file. 3.20 is a decent modern version of CMake.
cmake_minimum_required(VERSION 3.20)

# The languages part is optional
project(cproj LANGUAGES C)

# Defines the C Standard to use. This sets it to [ISO C 2018]
set(CMAKE_C_STANDARD 17)
# Makes the C Standard requirement mandatory
set(CMAKE_C_STANDARD_REQUIRED ON)
# Disables compiler specific extensions, to ensure portability
set(CMAKE_C_EXTENSIONS OFF)

# Makes a compile_commands.json file for vim/IDE/ LSP integration
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# Adds two subdirectories that contain their own CMakeLists.txt file
add_subdirectory(libs/lib1)
add_subdirectory(libs/lib2)

# Creates an executable called cproj, that compiles the given files
add_executable(cproj
  src/main.c src/app.c
)

# Headers that are used for compiling the given files for cproj
target_include_directories(cproj
  PRIVATE
  ${CMAKE_CURRENT_SOURCE_DIR}/include
)

# Link the two libraries to the executable
# PRIVATE means, their dependencies are not propagated
# (like system libraries that lib1/lib2 might be linked to)
target_link_libraries(cproj
  PRIVATE
    lib1
    lib2
)

