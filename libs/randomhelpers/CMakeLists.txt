add_library(pac-randomhelpers INTERFACE)

target_sources(pac-randomhelpers INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/randomHelpers/test/unit_test_001.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/randomHelpers/randomHelpers.h"
)

target_include_directories(pac-randomhelpers INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/randomHelpers"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-randomhelpers INTERFACE
    arduino-compat
)
