add_library(multimap INTERFACE)

target_sources(multimap INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MultiMap/test/unit_test_001.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MultiMap/MultiMap.h"
)

target_include_directories(multimap INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MultiMap"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(multimap INTERFACE
    arduino-compat
)
