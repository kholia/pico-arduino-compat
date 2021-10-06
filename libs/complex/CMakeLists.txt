add_library(complex INTERFACE)

target_sources(complex INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Complex/Complex.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Complex/test/unit_test_001.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Complex/Complex.h"
)

target_include_directories(complex INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Complex"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(complex INTERFACE
    arduino-compat
)
