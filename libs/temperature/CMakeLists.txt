add_library(pac-temperature INTERFACE)

target_sources(pac-temperature INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Temperature/test/unit_test_001.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Temperature/temperature.h"
)

target_include_directories(pac-temperature INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Temperature"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-temperature INTERFACE
    arduino-compat
)
