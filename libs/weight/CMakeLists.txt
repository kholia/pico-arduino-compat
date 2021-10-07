add_library(pac-weight INTERFACE)

target_sources(pac-weight INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/weight/test/unit_test_001.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/weight/weight.h"
)

target_include_directories(pac-weight INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/weight"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-weight INTERFACE
    arduino-compat
)
