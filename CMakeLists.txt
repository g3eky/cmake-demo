cmake_minimum_required(VERSION 3.20)

project(cproj C)

set(CMAKE_C_STANDARD 17)
set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_C_EXTENSIONS OFF)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_subdirectory(libs/lib1)
add_subdirectory(libs/lib2)

add_executable(cproj
  src/main.c src/app.c
)

# Headers for the app itself
target_include_directories(cproj
  PRIVATE
  ${CMAKE_CURRENT_SOURCE_DIR}/include
)

# Link with our libs
target_link_libraries(cproj
  PRIVATE
    lib1
    lib2
)

