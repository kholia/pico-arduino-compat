add_library(dac7611 INTERFACE)

target_sources(dac7611 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/DAC7611/src/DAC7611.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DAC7611/src/DAC7611.h"
)

target_include_directories(dac7611 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/DAC7611/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(dac7611 INTERFACE
    arduino-compat
)
