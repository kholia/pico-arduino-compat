add_library(pac-max14661 INTERFACE)

target_sources(pac-max14661 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MAX14661/MAX14661.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MAX14661/test/unit_test_001.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MAX14661/MAX14661.h"
)

target_include_directories(pac-max14661 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MAX14661"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-max14661 INTERFACE
    arduino-compat
)
