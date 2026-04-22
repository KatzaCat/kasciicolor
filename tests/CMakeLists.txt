add_executable(KACE_base base.cpp)

set_target_properties(KACE_base PROPERTIES CXX_STANDARD 23)

target_link_libraries(KACE_base PRIVATE kasciicolor stdc++exp)

add_test(KACT_base KACE_base)
