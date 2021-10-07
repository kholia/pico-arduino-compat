add_library(pac-adafruit-vs1053-library INTERFACE)

target_sources(pac-adafruit-vs1053-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_VS1053_Library/Adafruit_VS1053.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_VS1053_Library/Adafruit_VS1053.h"
)

target_include_directories(pac-adafruit-vs1053-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_VS1053_Library"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET pac-sd)
    add_subdirectory(../../libs/sd build_pac-sd)
endif()

target_link_libraries(pac-adafruit-vs1053-library INTERFACE
    arduino-compat
    pac-sd
)
