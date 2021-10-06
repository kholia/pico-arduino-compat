add_library(fraction INTERFACE)

target_sources(fraction INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Fraction/fraction.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Fraction/test/unit_test_001.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Fraction/fraction.h"
)

target_include_directories(fraction INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Fraction"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(fraction INTERFACE
    arduino-compat
)
