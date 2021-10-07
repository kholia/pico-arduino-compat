add_library(pac-distancetable INTERFACE)

target_sources(pac-distancetable INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/DistanceTable/DistanceTable.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DistanceTable/test/unit_test_001.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DistanceTable/DistanceTable.h"
)

target_include_directories(pac-distancetable INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/DistanceTable"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-distancetable INTERFACE
    arduino-compat
)
