add_library(adafruit-bd3491fs INTERFACE)

target_sources(adafruit-bd3491fs INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_BD3491FS/Adafruit_BD3491FS.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_BD3491FS/Adafruit_BD3491FS.h"
)

target_include_directories(adafruit-bd3491fs INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_BD3491FS"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET adafruit-busio)
    add_subdirectory(../../libs/adafruit-busio build_adafruit-busio)
endif()

target_link_libraries(adafruit-bd3491fs INTERFACE
    arduino-compat
    adafruit-busio
)
