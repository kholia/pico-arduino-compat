add_library(pac-mt8870 INTERFACE)

target_sources(pac-mt8870 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MT8870/MT8870.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MT8870/test/unit_test_001.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MT8870/MT8870.h"
)

target_include_directories(pac-mt8870 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MT8870"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-mt8870 INTERFACE
    arduino-compat
)
