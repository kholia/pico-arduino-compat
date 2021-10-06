add_library(m5atom INTERFACE)

target_sources(m5atom INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/M5Atom/src/M5Atom.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/M5Atom/src/utility/Button.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/M5Atom/src/utility/LED_DisPlay.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/M5Atom/src/utility/MahonyAHRS.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/M5Atom/src/utility/Task.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/M5Atom/src/utility/MPU6886.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/M5Atom/src/utility/M5Timer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/M5Atom/examples/Echo/EchoRest/BaiduRest.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/M5Atom/examples/ATOM_BASE/ATOM_StepMotor/StepperDriver.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/M5Atom/examples/ATOM_BASE/ATOM_Motion/AtomMotion.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/M5Atom/examples/ATOM_BASE/ATOM_CAN/ESP32CAN.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/M5Atom/examples/ATOM_BASE/ATOM_Socket/AtomSocket.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/M5Atom/examples/ATOM_BASE/ATOM_FLY/AtomFly.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/M5Atom/examples/ATOM_BASE/ATOM_SPK/PlayRawPCM/AtomSPK.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/M5Atom/examples/ATOM_BASE/ATOM_GPS/GPSAnalyse.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/M5Atom/examples/Unit/THERMAL_MLX90640/MLX90640_I2C_Driver.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/M5Atom/examples/Unit/THERMAL_MLX90640/MLX90640_API.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/M5Atom/examples/Unit/THERMAL_MLX90640/interpolation.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/M5Atom/examples/Unit/RFID_RC522/MFRC522_I2C.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/M5Atom/examples/Unit/UHF_RFID_JRD4035/RFID_command_basics.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/M5Atom/examples/Unit/UHF_RFID_JRD4035/RFID_command.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/M5Atom/examples/Unit/CAN/ESP32CAN.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/M5Atom/examples/Advanced/WIFI/WiFiSetting/Parsing.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/M5Atom/examples/Advanced/WIFI/WiFiSetting/WebServer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/M5Atom/examples/Echo/PlayMusic/chocobo.c"
  "${CMAKE_CURRENT_LIST_DIR}/M5Atom/examples/ATOM_BASE/ATOM_CAN/CAN.c"
  "${CMAKE_CURRENT_LIST_DIR}/M5Atom/examples/ATOM_BASE/ATOM_SPK/PlayRawPCM/chocobo_loop_r.c"
  "${CMAKE_CURRENT_LIST_DIR}/M5Atom/examples/Basics/LEDDisplay/image.c"
  "${CMAKE_CURRENT_LIST_DIR}/M5Atom/examples/Unit/CAN/CAN.c"
  "${CMAKE_CURRENT_LIST_DIR}/M5Atom/src/M5Atom.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5Atom/src/utility/M5Timer.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5Atom/src/utility/Button.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5Atom/src/utility/MahonyAHRS.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5Atom/src/utility/LED_DisPlay.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5Atom/src/utility/Task.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5Atom/src/utility/MPU6886.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5Atom/examples/Echo/EchoRest/BaiduRest.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5Atom/examples/ATOM_BASE/ATOM_StepMotor/StepperDriver.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5Atom/examples/ATOM_BASE/ATOM_Motion/AtomMotion.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5Atom/examples/ATOM_BASE/ATOM_PoE/index.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5Atom/examples/ATOM_BASE/ATOM_CAN/CAN.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5Atom/examples/ATOM_BASE/ATOM_CAN/CAN_config.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5Atom/examples/ATOM_BASE/ATOM_CAN/ESP32CAN.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5Atom/examples/ATOM_BASE/ATOM_CAN/can_regdef.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5Atom/examples/ATOM_BASE/ATOM_Socket/index.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5Atom/examples/ATOM_BASE/ATOM_Socket/AtomSocket.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5Atom/examples/ATOM_BASE/ATOM_FLY/AtomFly.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5Atom/examples/ATOM_BASE/ATOM_SPK/PlayRawPCM/AtomSPK.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5Atom/examples/ATOM_BASE/ATOM_GPS/GPSAnalyse.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5Atom/examples/Unit/THERMAL_MLX90640/MLX90640_API.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5Atom/examples/Unit/THERMAL_MLX90640/MLX90640_I2C_Driver.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5Atom/examples/Unit/RFID_RC522/MFRC522_I2C.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5Atom/examples/Unit/UHF_RFID_JRD4035/RFID_command.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5Atom/examples/Unit/CAN/CAN.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5Atom/examples/Unit/CAN/CAN_config.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5Atom/examples/Unit/CAN/ESP32CAN.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5Atom/examples/Unit/CAN/can_regdef.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5Atom/examples/Advanced/WIFI/WiFiSetting/WebServer.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5Atom/examples/Advanced/WIFI/WiFiSetting/detail/RequestHandler.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5Atom/examples/Advanced/WIFI/WiFiSetting/detail/RequestHandlersImpl.h"
)

target_include_directories(m5atom INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/M5Atom/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(m5atom INTERFACE
    arduino-compat
)
