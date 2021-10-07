add_library(pac-sodaq_wdt INTERFACE)

target_sources(pac-sodaq_wdt INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Sodaq_wdt/src/Sodaq_wdt.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Sodaq_wdt/src/Sodaq_wdt.h"
)

target_include_directories(pac-sodaq_wdt INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Sodaq_wdt/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-sodaq_wdt INTERFACE
    arduino-compat
)
