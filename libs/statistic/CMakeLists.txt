add_library(pac-statistic INTERFACE)

target_sources(pac-statistic INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Statistic/Statistic.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Statistic/test/unit_test_001.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Statistic/Statistic.h"
)

target_include_directories(pac-statistic INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Statistic"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-statistic INTERFACE
    arduino-compat
)
