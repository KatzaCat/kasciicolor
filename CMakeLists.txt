cmake_minimum_required(VERSION 4.2.0)

project(kasciicolor LANGUAGES CXX VERSION 4.21.26)

add_library(${PROJECT_NAME} STATIC 
  src/kasciicolor.cpp
)

set_target_properties(${PROJECT_NAME} PROPERTIES
  CXX_STANDARD 23
)

if(KAC_ISTESTING)
  enable_testing()
  add_subdirectory(tests)
endif()
