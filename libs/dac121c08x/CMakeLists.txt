add_library(pac-dac121c08x INTERFACE)

target_sources(pac-dac121c08x INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/DAC121C08x-Driver/src/DAC121.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DAC121C08x-Driver/src/DAC121.h"
)

target_include_directories(pac-dac121c08x INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/DAC121C08x-Driver/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-dac121c08x INTERFACE
    arduino-compat
)
