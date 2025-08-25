cmake_minimum_required(VERSION 3.20)

add_library(lib1 src/lib1.c)

target_include_directories(lib1
  PUBLIC
  ${CMAKE_CURRENT_SOURCE_DIR}/include
)
