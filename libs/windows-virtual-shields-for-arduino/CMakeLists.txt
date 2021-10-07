add_library(pac-windows-virtual-shields-for-arduino INTERFACE)

target_sources(pac-windows-virtual-shields-for-arduino INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/virtual-shields-arduino/src/Geolocator.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/virtual-shields-arduino/src/VirtualShield.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/virtual-shields-arduino/src/Gyrometer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/virtual-shields-arduino/src/LightSensor.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/virtual-shields-arduino/src/Graphics.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/virtual-shields-arduino/src/Vibrate.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/virtual-shields-arduino/src/Web.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/virtual-shields-arduino/src/Notification.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/virtual-shields-arduino/src/Speech.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/virtual-shields-arduino/src/Sensor.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/virtual-shields-arduino/src/Recognition.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/virtual-shields-arduino/src/Sms.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/virtual-shields-arduino/src/Accelerometer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/virtual-shields-arduino/src/Email.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/virtual-shields-arduino/src/Camera.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/virtual-shields-arduino/src/Microphone.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/virtual-shields-arduino/src/Orientation.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/virtual-shields-arduino/src/Compass.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/virtual-shields-arduino/src/Media.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/virtual-shields-arduino/src/Text.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/virtual-shields-arduino/examples/PictureTheWeather/RGBStrip.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/virtual-shields-arduino/examples/RGBLED-Draw/RGBStrip.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/virtual-shields-arduino/examples/RGBLED-Draw/RGBGrid.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/virtual-shields-arduino/examples/LedMatrix/RGBStripMatrix.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/virtual-shields-arduino/src/Notification.h"
  "${CMAKE_CURRENT_LIST_DIR}/virtual-shields-arduino/src/Sensor.h"
  "${CMAKE_CURRENT_LIST_DIR}/virtual-shields-arduino/src/Microphone.h"
  "${CMAKE_CURRENT_LIST_DIR}/virtual-shields-arduino/src/Geolocator.h"
  "${CMAKE_CURRENT_LIST_DIR}/virtual-shields-arduino/src/Text.h"
  "${CMAKE_CURRENT_LIST_DIR}/virtual-shields-arduino/src/Speech.h"
  "${CMAKE_CURRENT_LIST_DIR}/virtual-shields-arduino/src/Orientation.h"
  "${CMAKE_CURRENT_LIST_DIR}/virtual-shields-arduino/src/Gyrometer.h"
  "${CMAKE_CURRENT_LIST_DIR}/virtual-shields-arduino/src/VirtualShield.h"
  "${CMAKE_CURRENT_LIST_DIR}/virtual-shields-arduino/src/SensorModels.h"
  "${CMAKE_CURRENT_LIST_DIR}/virtual-shields-arduino/src/ShieldEvent.h"
  "${CMAKE_CURRENT_LIST_DIR}/virtual-shields-arduino/src/Camera.h"
  "${CMAKE_CURRENT_LIST_DIR}/virtual-shields-arduino/src/LightSensor.h"
  "${CMAKE_CURRENT_LIST_DIR}/virtual-shields-arduino/src/Web.h"
  "${CMAKE_CURRENT_LIST_DIR}/virtual-shields-arduino/src/Vibrate.h"
  "${CMAKE_CURRENT_LIST_DIR}/virtual-shields-arduino/src/Media.h"
  "${CMAKE_CURRENT_LIST_DIR}/virtual-shields-arduino/src/Sms.h"
  "${CMAKE_CURRENT_LIST_DIR}/virtual-shields-arduino/src/Recognition.h"
  "${CMAKE_CURRENT_LIST_DIR}/virtual-shields-arduino/src/Accelerometer.h"
  "${CMAKE_CURRENT_LIST_DIR}/virtual-shields-arduino/src/Email.h"
  "${CMAKE_CURRENT_LIST_DIR}/virtual-shields-arduino/src/Graphics.h"
  "${CMAKE_CURRENT_LIST_DIR}/virtual-shields-arduino/src/Attr.h"
  "${CMAKE_CURRENT_LIST_DIR}/virtual-shields-arduino/src/Colors.h"
  "${CMAKE_CURRENT_LIST_DIR}/virtual-shields-arduino/src/Compass.h"
  "${CMAKE_CURRENT_LIST_DIR}/virtual-shields-arduino/examples/PictureTheWeather/RGBStrip.h"
  "${CMAKE_CURRENT_LIST_DIR}/virtual-shields-arduino/examples/RGBLED-Draw/RGBGrid.h"
  "${CMAKE_CURRENT_LIST_DIR}/virtual-shields-arduino/examples/RGBLED-Draw/RGBStrip.h"
  "${CMAKE_CURRENT_LIST_DIR}/virtual-shields-arduino/examples/LedMatrix/RGBStripMatrix.h"
)

target_include_directories(pac-windows-virtual-shields-for-arduino INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/virtual-shields-arduino/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-windows-virtual-shields-for-arduino INTERFACE
    arduino-compat
)
