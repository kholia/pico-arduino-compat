add_library(pac-dac7611 INTERFACE)

target_sources(pac-dac7611 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/DAC7611/src/DAC7611.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DAC7611/src/DAC7611.h"
)

target_include_directories(pac-dac7611 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/DAC7611/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-dac7611 INTERFACE
    arduino-compat
)
