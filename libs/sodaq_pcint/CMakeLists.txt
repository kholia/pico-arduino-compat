add_library(pac-sodaq_pcint INTERFACE)

target_sources(pac-sodaq_pcint INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Sodaq_PcInt/src/Sodaq_PcInt.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Sodaq_PcInt/src/Sodaq_PcInt.h"
)

target_include_directories(pac-sodaq_pcint INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Sodaq_PcInt/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-sodaq_pcint INTERFACE
    arduino-compat
)
