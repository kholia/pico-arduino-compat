add_library(pac-functiongenerator INTERFACE)

target_sources(pac-functiongenerator INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/FunctionGenerator/functionGenerator.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FunctionGenerator/test/unit_test_001.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FunctionGenerator/functionGenerator.h"
)

target_include_directories(pac-functiongenerator INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/FunctionGenerator"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-functiongenerator INTERFACE
    arduino-compat
)
