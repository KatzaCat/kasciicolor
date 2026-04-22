cmake_minimum_required(VERSION 4.2.0)

project(kasciicolor LANGUAGES CXX VERSION 4.21.26)

add_library(${PROJECT_NAME} INTERFACE)

target_include_directories(${PROJECT_NAME} INTERFACE ${CMAKE_SOURCE_DIR}/include)


# Dummy EXE so that the compile commands with gen
add_executable(dummy src/main.cpp)
target_include_directories(dummy PRIVATE ${CMAKE_SOURCE_DIR}/include)

set_target_properties(dummy PROPERTIES
  CXX_STANDARD 23
)

if(KAC_ISTESTING)
  enable_testing()
  add_subdirectory(tests)
endif()
