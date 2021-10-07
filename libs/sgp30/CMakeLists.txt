add_library(pac-sgp30 INTERFACE)

target_sources(pac-sgp30 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SGP30/SGP30.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SGP30/test/unit_test_001.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SGP30/SGP30.h"
)

target_include_directories(pac-sgp30 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SGP30"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-sgp30 INTERFACE
    arduino-compat
)
