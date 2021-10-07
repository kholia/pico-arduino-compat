add_library(pac-adafruit-bd3491fs INTERFACE)

target_sources(pac-adafruit-bd3491fs INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_BD3491FS/Adafruit_BD3491FS.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_BD3491FS/Adafruit_BD3491FS.h"
)

target_include_directories(pac-adafruit-bd3491fs INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_BD3491FS"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET pac-adafruit-busio)
    add_subdirectory(../../libs/adafruit-busio build_pac-adafruit-busio)
endif()

target_link_libraries(pac-adafruit-bd3491fs INTERFACE
    arduino-compat
    pac-adafruit-busio
)
