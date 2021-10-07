add_library(pac-par27979 INTERFACE)

target_sources(pac-par27979 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/PAR27979/test/unit_test_001.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/PAR27979/PAR27979.h"
)

target_include_directories(pac-par27979 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/PAR27979"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-par27979 INTERFACE
    arduino-compat
)
