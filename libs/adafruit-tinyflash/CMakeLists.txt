add_library(adafruit-tinyflash INTERFACE)

target_sources(adafruit-tinyflash INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_TinyFlash/Adafruit_TinyFlash.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_TinyFlash/Adafruit_TinyFlash.h"
)

target_include_directories(adafruit-tinyflash INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_TinyFlash"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(adafruit-tinyflash INTERFACE
    arduino-compat
)
