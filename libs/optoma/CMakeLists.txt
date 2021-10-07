add_library(pac-optoma INTERFACE)

target_sources(pac-optoma INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Optoma/optoma.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Optoma/test/unit_test_001.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Optoma/optoma.h"
)

target_include_directories(pac-optoma INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Optoma"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-optoma INTERFACE
    arduino-compat
)
