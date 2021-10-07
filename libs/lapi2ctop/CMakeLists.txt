add_library(pac-lapi2ctop INTERFACE)

target_sources(pac-lapi2ctop INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/LapI2CTop/src/LapI2CTop.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LapI2CTop/src/LapI2CTop.h"
)

target_include_directories(pac-lapi2ctop INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/LapI2CTop/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-lapi2ctop INTERFACE
    arduino-compat
)
