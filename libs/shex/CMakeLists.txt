add_library(pac-shex INTERFACE)

target_sources(pac-shex INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SHEX/SHEX.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SHEX/test/unit_test_001.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SHEX/SHEX.h"
)

target_include_directories(pac-shex INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SHEX"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-shex INTERFACE
    arduino-compat
)
