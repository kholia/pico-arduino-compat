add_library(audiofrequencymeter INTERFACE)

target_sources(audiofrequencymeter INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/AudioFrequencyMeter/src/AudioFrequencyMeter.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AudioFrequencyMeter/src/AudioFrequencyMeter.h"
)

target_include_directories(audiofrequencymeter INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/AudioFrequencyMeter/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(audiofrequencymeter INTERFACE
    arduino-compat
)
