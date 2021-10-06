add_library(adafruit-vs1053-library INTERFACE)

target_sources(adafruit-vs1053-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_VS1053_Library/Adafruit_VS1053.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_VS1053_Library/Adafruit_VS1053.h"
)

target_include_directories(adafruit-vs1053-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_VS1053_Library"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET official-sd)
    add_subdirectory(../../official-libs/sd build_official-sd)
endif()

target_link_libraries(adafruit-vs1053-library INTERFACE
    arduino-compat
    official-sd
)
