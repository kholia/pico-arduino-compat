add_library(pac-rokitsmart INTERFACE)

target_sources(pac-rokitsmart INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/RokitSmart/SmartInventor.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RokitSmart/Servo.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RokitSmart/util/DCM.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RokitSmart/util/TVRemocon.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RokitSmart/util/MsTimer2.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RokitSmart/util/EEPROM.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RokitSmart/util/Firmata.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RokitSmart/util/IRRemocon.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RokitSmart/util/SerialFirmata.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RokitSmart/util/WiFiStream.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RokitSmart/util/FirmataParser.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RokitSmart/util/BLEStream.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RokitSmart/util/EthernetClientStream.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RokitSmart/util/IRremoteTV.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RokitSmart/util/FirmataMarshaller.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RokitSmart/SmartInventor.h"
  "${CMAKE_CURRENT_LIST_DIR}/RokitSmart/Servo.h"
  "${CMAKE_CURRENT_LIST_DIR}/RokitSmart/util/FirmataConstants.h"
  "${CMAKE_CURRENT_LIST_DIR}/RokitSmart/util/SerialFirmata.h"
  "${CMAKE_CURRENT_LIST_DIR}/RokitSmart/util/DCM.h"
  "${CMAKE_CURRENT_LIST_DIR}/RokitSmart/util/FirmataParser.h"
  "${CMAKE_CURRENT_LIST_DIR}/RokitSmart/util/EthernetClientStream.h"
  "${CMAKE_CURRENT_LIST_DIR}/RokitSmart/util/WiFiStream.h"
  "${CMAKE_CURRENT_LIST_DIR}/RokitSmart/util/Boards.h"
  "${CMAKE_CURRENT_LIST_DIR}/RokitSmart/util/MsTimer2.h"
  "${CMAKE_CURRENT_LIST_DIR}/RokitSmart/util/TVRemocon.h"
  "${CMAKE_CURRENT_LIST_DIR}/RokitSmart/util/Firmata.h"
  "${CMAKE_CURRENT_LIST_DIR}/RokitSmart/util/WiFiServerStream.h"
  "${CMAKE_CURRENT_LIST_DIR}/RokitSmart/util/EEPROM.h"
  "${CMAKE_CURRENT_LIST_DIR}/RokitSmart/util/IRremoteTV.h"
  "${CMAKE_CURRENT_LIST_DIR}/RokitSmart/util/FirmataFeature.h"
  "${CMAKE_CURRENT_LIST_DIR}/RokitSmart/util/FirmataDefines.h"
  "${CMAKE_CURRENT_LIST_DIR}/RokitSmart/util/WiFiClientStream.h"
  "${CMAKE_CURRENT_LIST_DIR}/RokitSmart/util/IRRemocon.h"
  "${CMAKE_CURRENT_LIST_DIR}/RokitSmart/util/firmataDebug.h"
  "${CMAKE_CURRENT_LIST_DIR}/RokitSmart/util/BLEStream.h"
  "${CMAKE_CURRENT_LIST_DIR}/RokitSmart/util/FirmataMarshaller.h"
  "${CMAKE_CURRENT_LIST_DIR}/RokitSmart/examples/DefaultProgram/ServoAngleTuner.h"
  "${CMAKE_CURRENT_LIST_DIR}/RokitSmart/examples/DefaultProgram/ProgramSelection.h"
  "${CMAKE_CURRENT_LIST_DIR}/RokitSmart/examples/DefaultProgram/RiceBarleyBot.h"
  "${CMAKE_CURRENT_LIST_DIR}/RokitSmart/examples/DefaultProgram/LineTracer.h"
  "${CMAKE_CURRENT_LIST_DIR}/RokitSmart/examples/DefaultProgram/GripBot.h"
  "${CMAKE_CURRENT_LIST_DIR}/RokitSmart/examples/DefaultProgram/ShootingBot.h"
  "${CMAKE_CURRENT_LIST_DIR}/RokitSmart/examples/DefaultProgram/HandballBot.h"
  "${CMAKE_CURRENT_LIST_DIR}/RokitSmart/examples/DefaultProgram/RokitFirmata.h"
  "${CMAKE_CURRENT_LIST_DIR}/RokitSmart/examples/DefaultProgram/UpgradeMouseBot.h"
  "${CMAKE_CURRENT_LIST_DIR}/RokitSmart/examples/DefaultProgram/RemoconCar.h"
  "${CMAKE_CURRENT_LIST_DIR}/RokitSmart/examples/DefaultProgram/Viking.h"
  "${CMAKE_CURRENT_LIST_DIR}/RokitSmart/examples/DefaultProgram/Segway.h"
  "${CMAKE_CURRENT_LIST_DIR}/RokitSmart/examples/DefaultProgram/MelodyBot.h"
  "${CMAKE_CURRENT_LIST_DIR}/RokitSmart/examples/DefaultProgram/FlagGame.h"
  "${CMAKE_CURRENT_LIST_DIR}/RokitSmart/examples/DefaultProgram/MouseBot.h"
  "${CMAKE_CURRENT_LIST_DIR}/RokitSmart/examples/DefaultProgram/LiftBot.h"
  "${CMAKE_CURRENT_LIST_DIR}/RokitSmart/examples/DefaultProgram/SumoBot.h"
  "${CMAKE_CURRENT_LIST_DIR}/RokitSmart/examples/DefaultProgram/TurretBot.h"
  "${CMAKE_CURRENT_LIST_DIR}/RokitSmart/examples/DefaultProgram/Rodeo.h"
  "${CMAKE_CURRENT_LIST_DIR}/RokitSmart/examples/DefaultProgram/GorillarBot.h"
  "${CMAKE_CURRENT_LIST_DIR}/RokitSmart/examples/DefaultProgram/Simulator.h"
  "${CMAKE_CURRENT_LIST_DIR}/RokitSmart/examples/DefaultProgram/AutoCrossBar.h"
)

target_include_directories(pac-rokitsmart INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/RokitSmart"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-rokitsmart INTERFACE
    arduino-compat
)
