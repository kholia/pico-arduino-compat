add_library(distancetable INTERFACE)

target_sources(distancetable INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/DistanceTable/DistanceTable.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DistanceTable/test/unit_test_001.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DistanceTable/DistanceTable.h"
)

target_include_directories(distancetable INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/DistanceTable"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(distancetable INTERFACE
    arduino-compat
)
