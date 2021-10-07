add_library(pac-devrandom INTERFACE)

target_sources(pac-devrandom INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/DEVRANDOM/test/unit_test_001.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DEVRANDOM/DEVRANDOM.h"
)

target_include_directories(pac-devrandom INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/DEVRANDOM"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-devrandom INTERFACE
    arduino-compat
)
