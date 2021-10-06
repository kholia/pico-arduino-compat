add_library(printhelpers INTERFACE)

target_sources(printhelpers INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/printHelpers/test/unit_test_001.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/printHelpers/printHelpers.h"
)

target_include_directories(printhelpers INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/printHelpers"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(printhelpers INTERFACE
    arduino-compat
)
