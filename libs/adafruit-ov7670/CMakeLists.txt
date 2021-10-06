add_library(adafruit-ov7670 INTERFACE)

target_sources(adafruit-ov7670 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_OV7670/src/SPIBrute.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_OV7670/src/Adafruit_OV7670.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_OV7670/src/arch/samd51_arduino.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_OV7670/src/image_ops.c"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_OV7670/src/ov7670.c"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_OV7670/src/arch/samd51.c"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_OV7670/src/Adafruit_OV7670.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_OV7670/src/SPIBrute.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_OV7670/src/image_ops.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_OV7670/src/ov7670.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_OV7670/src/arch/samd51.h"
)

target_include_directories(adafruit-ov7670 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_OV7670/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(adafruit-ov7670 INTERFACE
    arduino-compat
)
