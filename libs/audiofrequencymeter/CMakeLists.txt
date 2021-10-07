add_library(pac-audiofrequencymeter INTERFACE)

target_sources(pac-audiofrequencymeter INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/AudioFrequencyMeter/src/AudioFrequencyMeter.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AudioFrequencyMeter/src/AudioFrequencyMeter.h"
)

target_include_directories(pac-audiofrequencymeter INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/AudioFrequencyMeter/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-audiofrequencymeter INTERFACE
    arduino-compat
)
