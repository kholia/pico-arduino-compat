add_library(correlation INTERFACE)

target_sources(correlation INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Correlation/Correlation.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Correlation/test/unit_test_001.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Correlation/Correlation.h"
)

target_include_directories(correlation INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Correlation"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(correlation INTERFACE
    arduino-compat
)
