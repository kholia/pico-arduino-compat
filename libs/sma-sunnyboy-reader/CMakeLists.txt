add_library(pac-sma-sunnyboy-reader INTERFACE)

target_sources(pac-sma-sunnyboy-reader INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SMA-SunnyBoy-Reader/src/SMAReader.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SMA-SunnyBoy-Reader/src/SMAReader.h"
)

target_include_directories(pac-sma-sunnyboy-reader INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SMA-SunnyBoy-Reader/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-sma-sunnyboy-reader INTERFACE
    arduino-compat
)
