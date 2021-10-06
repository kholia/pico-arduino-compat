add_library(infiniteaverage INTERFACE)

target_sources(infiniteaverage INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/infiniteAverage/test/unit_test_001.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/infiniteAverage/infiniteAverage.h"
)

target_include_directories(infiniteaverage INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/infiniteAverage"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(infiniteaverage INTERFACE
    arduino-compat
)
