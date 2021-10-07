add_library(pac-fastmap INTERFACE)

target_sources(pac-fastmap INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/FastMap/FastMap.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FastMap/test/unit_test_001.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FastMap/FastMap.h"
)

target_include_directories(pac-fastmap INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/FastMap"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-fastmap INTERFACE
    arduino-compat
)
