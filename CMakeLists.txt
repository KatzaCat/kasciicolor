cmake_minimum_required(VERSION 4.2.0)

project(kasciicolor LANGUAGES CXX VERSION 4.21.26)

add_library(${PROJECT_NAME} INTERFACE)

target_include_directories(${PROJECT_NAME}
        INTERFACE
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
        $<INSTALL_INTERFACE:include>
)

add_library(kasciicolor::kasciicolor ALIAS ${PROJECT_NAME})

target_compile_features(${PROJECT_NAME} INTERFACE cxx_std_23)

if(KAC_ISTESTING)
        enable_testing()
        add_subdirectory(tests)
endif()
