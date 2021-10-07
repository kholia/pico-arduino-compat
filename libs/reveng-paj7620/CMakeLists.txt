add_library(pac-reveng-paj7620 INTERFACE)

target_sources(pac-reveng-paj7620 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/RevEng_PAJ7620/test/test_begin.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RevEng_PAJ7620/src/RevEng_PAJ7620.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RevEng_PAJ7620/src/RevEng_PAJ7620.h"
)

target_include_directories(pac-reveng-paj7620 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/RevEng_PAJ7620/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-reveng-paj7620 INTERFACE
    arduino-compat
)
