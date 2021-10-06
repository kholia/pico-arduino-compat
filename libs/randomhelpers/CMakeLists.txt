add_library(randomhelpers INTERFACE)

target_sources(randomhelpers INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/randomHelpers/test/unit_test_001.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/randomHelpers/randomHelpers.h"
)

target_include_directories(randomhelpers INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/randomHelpers"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(randomhelpers INTERFACE
    arduino-compat
)
