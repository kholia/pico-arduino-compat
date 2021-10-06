add_library(tsl235r INTERFACE)

target_sources(tsl235r INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TSL235R/TSL235R .cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TSL235R/test/unit_test_001.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TSL235R/TSL235R.h"
)

target_include_directories(tsl235r INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TSL235R"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(tsl235r INTERFACE
    arduino-compat
)
