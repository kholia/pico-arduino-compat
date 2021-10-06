add_library(arduino_pro_tutorials INTERFACE)

target_sources(arduino_pro_tutorials INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_Pro_Tutorials/src/Arduino_Pro_Tutorials.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_Pro_Tutorials/examples/Portenta H7 as a WiFi Access Point/SimpleWebServer/arduino_secrets.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_Pro_Tutorials/examples/Creating a Flash-Optimised Key-Value Store/FlashKeyValue/FlashIAPLimits.h"
)

target_include_directories(arduino_pro_tutorials INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Arduino_Pro_Tutorials/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(arduino_pro_tutorials INTERFACE
    arduino-compat
)
