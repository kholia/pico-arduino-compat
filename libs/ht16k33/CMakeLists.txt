add_library(pac-ht16k33 INTERFACE)

target_sources(pac-ht16k33 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/HT16K33/HT16K33.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/HT16K33/test/unit_test_001.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/HT16K33/HT16K33.h"
)

target_include_directories(pac-ht16k33 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/HT16K33"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-ht16k33 INTERFACE
    arduino-compat
)
