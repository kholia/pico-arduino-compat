add_library(tuyav INTERFACE)

target_sources(tuyav INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Tuyav/src/analogOutput.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Tuyav/src/analogInput.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Tuyav/src/protocol.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Tuyav/src/digitalOutput.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Tuyav/src/mcu_api.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Tuyav/src/system.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Tuyav/src/InputClass.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Tuyav/src/userValue.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Tuyav/src/digitalInput.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Tuyav/src/TuyaSerial.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Tuyav/src/OutputClass.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Tuyav/src/Tuyav.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Tuyav/src/protocol.h"
  "${CMAKE_CURRENT_LIST_DIR}/Tuyav/src/digitalOutput.h"
  "${CMAKE_CURRENT_LIST_DIR}/Tuyav/src/wifi.h"
  "${CMAKE_CURRENT_LIST_DIR}/Tuyav/src/mcu_api.h"
  "${CMAKE_CURRENT_LIST_DIR}/Tuyav/src/TuyaSerial.h"
  "${CMAKE_CURRENT_LIST_DIR}/Tuyav/src/InputClass.h"
  "${CMAKE_CURRENT_LIST_DIR}/Tuyav/src/analogOutput.h"
  "${CMAKE_CURRENT_LIST_DIR}/Tuyav/src/Tuyav.h"
  "${CMAKE_CURRENT_LIST_DIR}/Tuyav/src/userValue.h"
  "${CMAKE_CURRENT_LIST_DIR}/Tuyav/src/analogInput.h"
  "${CMAKE_CURRENT_LIST_DIR}/Tuyav/src/digitalInput.h"
  "${CMAKE_CURRENT_LIST_DIR}/Tuyav/src/OutputClass.h"
  "${CMAKE_CURRENT_LIST_DIR}/Tuyav/src/system.h"
  "${CMAKE_CURRENT_LIST_DIR}/Tuyav/src/global.h"
)

target_include_directories(tuyav INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Tuyav/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(tuyav INTERFACE
    arduino-compat
)
