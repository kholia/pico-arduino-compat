add_library(pac-adafruit-veml6070-library INTERFACE)

target_sources(pac-adafruit-veml6070-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_VEML6070/Adafruit_VEML6070.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_VEML6070/Adafruit_VEML6070.h"
)

target_include_directories(pac-adafruit-veml6070-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_VEML6070"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-adafruit-veml6070-library INTERFACE
    arduino-compat
)
