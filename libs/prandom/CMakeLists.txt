add_library(pac-prandom INTERFACE)

target_sources(pac-prandom INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Prandom/Prandom.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Prandom/test/unit_test_001.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Prandom/Prandom.h"
)

target_include_directories(pac-prandom INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Prandom"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-prandom INTERFACE
    arduino-compat
)
