add_library(pac-sodaq_dataflash INTERFACE)

target_sources(pac-sodaq_dataflash INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Sodaq_dataflash/src/Sodaq_dataflash.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Sodaq_dataflash/src/Sodaq_dataflash.h"
)

target_include_directories(pac-sodaq_dataflash INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Sodaq_dataflash/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-sodaq_dataflash INTERFACE
    arduino-compat
)
