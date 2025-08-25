cmake_minimum_required(VERSION 3.20)

add_library(lib2 src/lib2.c)

target_include_directories(lib2
  PUBLIC
  ${CMAKE_CURRENT_SOURCE_DIR}/include
)
