add_library(tle5012b INTERFACE)

target_sources(tle5012b INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TLE5012-Magnetic-Angle-Sensor/src/pal/gpio.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TLE5012-Magnetic-Angle-Sensor/src/pal/spic.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TLE5012-Magnetic-Angle-Sensor/src/framework/mtb/pal/spic-mtb.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TLE5012-Magnetic-Angle-Sensor/src/framework/mtb/pal/gpio-mtb.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TLE5012-Magnetic-Angle-Sensor/src/framework/mtb/pal/timer-mtb.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TLE5012-Magnetic-Angle-Sensor/src/framework/arduino/pal/spi3w-xmc.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TLE5012-Magnetic-Angle-Sensor/src/framework/arduino/pal/spic-arduino.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TLE5012-Magnetic-Angle-Sensor/src/framework/arduino/pal/TLE5012-pal-ino.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TLE5012-Magnetic-Angle-Sensor/src/framework/arduino/pal/gpio-arduino.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TLE5012-Magnetic-Angle-Sensor/src/framework/arduino/pal/spi3w-ard.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TLE5012-Magnetic-Angle-Sensor/src/framework/wiced-43xxx/pal/TLE5012-pal-wiced.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TLE5012-Magnetic-Angle-Sensor/src/framework/wiced-43xxx/pal/gpio-wiced.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TLE5012-Magnetic-Angle-Sensor/src/framework/wiced-43xxx/pal/timer-wiced.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TLE5012-Magnetic-Angle-Sensor/src/framework/wiced-43xxx/pal/spic-wiced.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TLE5012-Magnetic-Angle-Sensor/src/framework/wiced-43xxx/apps/readAngleSpeedRevolutions/readAngleSpeedRevolutions.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TLE5012-Magnetic-Angle-Sensor/src/framework/wiced-43xxx/apps/writeRegisters/writeRegisters.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TLE5012-Magnetic-Angle-Sensor/src/framework/wiced-43xxx/apps/useMultipleSensors/useMultipleSensors.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TLE5012-Magnetic-Angle-Sensor/src/framework/wiced-43xxx/apps/testSensorMainValues/testSensorMainValues.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TLE5012-Magnetic-Angle-Sensor/src/framework/wiced-43xxx/apps/sensorRegisters/sensorRegisters.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TLE5012-Magnetic-Angle-Sensor/src/framework/wiced-43xxx/apps/E9000SPC/E9000SPC.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TLE5012-Magnetic-Angle-Sensor/src/framework/wiced-43xxx/apps/sensorType/sensorType.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TLE5012-Magnetic-Angle-Sensor/src/framework/wiced-43xxx/apps/readAngleTest/readAngleTest.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TLE5012-Magnetic-Angle-Sensor/src/framework/wiced-43xxx/apps/readSpeedProcessing/readSpeedProcessing.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TLE5012-Magnetic-Angle-Sensor/src/framework/wiced-43xxx/apps/readAngleValueProcessing/readAngleValueProcessing.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TLE5012-Magnetic-Angle-Sensor/src/framework/wiced-43xxx/apps/readMultipleRegisters/readMultipleRegisters.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TLE5012-Magnetic-Angle-Sensor/src/corelib/TLE5012b.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TLE5012-Magnetic-Angle-Sensor/src/corelib/tle5012b_reg.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TLE5012-Magnetic-Angle-Sensor/src/TLE5012-ino.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/TLE5012-Magnetic-Angle-Sensor/src/pal/gpio.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/TLE5012-Magnetic-Angle-Sensor/src/pal/timer.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/TLE5012-Magnetic-Angle-Sensor/src/pal/spic.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/TLE5012-Magnetic-Angle-Sensor/src/config/tle5012-conf-dfl.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/TLE5012-Magnetic-Angle-Sensor/src/config/tle5012-conf.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/TLE5012-Magnetic-Angle-Sensor/src/config/tle5012-conf-opts.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/TLE5012-Magnetic-Angle-Sensor/src/framework/mtb/pal/gpio-mtb.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/TLE5012-Magnetic-Angle-Sensor/src/framework/mtb/pal/spic-mtb.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/TLE5012-Magnetic-Angle-Sensor/src/framework/mtb/pal/timer-mtb.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/TLE5012-Magnetic-Angle-Sensor/src/framework/arduino/pal/spi3w-ino.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/TLE5012-Magnetic-Angle-Sensor/src/framework/arduino/pal/TLE5012-pal-ino.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/TLE5012-Magnetic-Angle-Sensor/src/framework/arduino/pal/spic-arduino.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/TLE5012-Magnetic-Angle-Sensor/src/framework/arduino/pal/gpio-arduino.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/TLE5012-Magnetic-Angle-Sensor/src/framework/arduino/wrapper/TLE5012-platf-ino.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/TLE5012-Magnetic-Angle-Sensor/src/framework/wiced-43xxx/pal/spic-wiced.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/TLE5012-Magnetic-Angle-Sensor/src/framework/wiced-43xxx/pal/TLE5012-pal-wiced.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/TLE5012-Magnetic-Angle-Sensor/src/framework/wiced-43xxx/pal/gpio-wiced.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/TLE5012-Magnetic-Angle-Sensor/src/framework/wiced-43xxx/pal/timer-wiced.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/TLE5012-Magnetic-Angle-Sensor/src/framework/wiced-43xxx/wrapper/TLE5012-platf-wiced.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/TLE5012-Magnetic-Angle-Sensor/src/framework/wiced-43xxx/apps/readAngleSpeedRevolutions/readAngleSpeedRevolutions.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/TLE5012-Magnetic-Angle-Sensor/src/framework/wiced-43xxx/apps/writeRegisters/writeRegisters.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/TLE5012-Magnetic-Angle-Sensor/src/framework/wiced-43xxx/apps/useMultipleSensors/useMultipleSensors.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/TLE5012-Magnetic-Angle-Sensor/src/framework/wiced-43xxx/apps/testSensorMainValues/testSensorMainValues.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/TLE5012-Magnetic-Angle-Sensor/src/framework/wiced-43xxx/apps/sensorRegisters/sensorRegisters.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/TLE5012-Magnetic-Angle-Sensor/src/framework/wiced-43xxx/apps/E9000SPC/E9000SPC.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/TLE5012-Magnetic-Angle-Sensor/src/framework/wiced-43xxx/apps/sensorType/sensorType.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/TLE5012-Magnetic-Angle-Sensor/src/framework/wiced-43xxx/apps/readAngleTest/readAngleTest.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/TLE5012-Magnetic-Angle-Sensor/src/framework/wiced-43xxx/apps/readSpeedProcessing/readSpeedProcessing.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/TLE5012-Magnetic-Angle-Sensor/src/framework/wiced-43xxx/apps/readAngleValueProcessing/readAngleValueProcessing.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/TLE5012-Magnetic-Angle-Sensor/src/framework/wiced-43xxx/apps/readMultipleRegisters/readMultipleRegisters.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/TLE5012-Magnetic-Angle-Sensor/src/corelib/tle5012b_util.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/TLE5012-Magnetic-Angle-Sensor/src/corelib/tle5012b_reg.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/TLE5012-Magnetic-Angle-Sensor/src/corelib/TLE5012b.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/TLE5012-Magnetic-Angle-Sensor/examples/sensorRegisters/const.h"
  "${CMAKE_CURRENT_LIST_DIR}/TLE5012-Magnetic-Angle-Sensor/examples/sensorType/const.h"
)

target_include_directories(tle5012b INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TLE5012-Magnetic-Angle-Sensor/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(tle5012b INTERFACE
    arduino-compat
)
