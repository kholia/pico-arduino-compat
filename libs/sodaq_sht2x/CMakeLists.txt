add_library(pac-sodaq_sht2x INTERFACE)

target_sources(pac-sodaq_sht2x INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Sodaq_SHT2x/src/Sodaq_SHT2x.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Sodaq_SHT2x/src/Sodaq_SHT2x.h"
)

target_include_directories(pac-sodaq_sht2x INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Sodaq_SHT2x/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-sodaq_sht2x INTERFACE
    arduino-compat
)
