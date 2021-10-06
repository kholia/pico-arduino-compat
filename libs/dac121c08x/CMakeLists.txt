add_library(dac121c08x INTERFACE)

target_sources(dac121c08x INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/DAC121C08x-Driver/src/DAC121.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DAC121C08x-Driver/src/DAC121.h"
)

target_include_directories(dac121c08x INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/DAC121C08x-Driver/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(dac121c08x INTERFACE
    arduino-compat
)
