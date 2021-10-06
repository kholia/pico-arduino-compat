add_library(sparkfun-usb-hub-qwiic-usb251x INTERFACE)

target_sources(sparkfun-usb-hub-qwiic-usb251x INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_USB251x_Arduino_Library/src/SparkFun_USB251x_IO.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_USB251x_Arduino_Library/src/SparkFun_USB251x_Arduino_Library.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_USB251x_Arduino_Library/src/SparkFun_USB251x_Constants.h"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_USB251x_Arduino_Library/src/SparkFun_USB251x_Arduino_Library.h"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_USB251x_Arduino_Library/src/SparkFun_USB251x_IO.h"
)

target_include_directories(sparkfun-usb-hub-qwiic-usb251x INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SparkFun_USB251x_Arduino_Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(sparkfun-usb-hub-qwiic-usb251x INTERFACE
    arduino-compat
)
