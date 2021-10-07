add_library(pac-aloesdevice INTERFACE)

target_sources(pac-aloesdevice INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/arduino-device/lib/Transport.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-device/lib/Exec.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-device/lib/Aloes.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-device/lib/Message.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-device/lib/Device.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-device/AloesDevice.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-device/lib/Sensors.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-device/lib/AsyncWait.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-device/lib/Globals.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-device/lib/Device.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-device/lib/Message.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-device/lib/Exec.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-device/lib/Transport.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-device/lib/Aloes.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-device/examples/secure-credentials.h"
)

target_include_directories(pac-aloesdevice INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/arduino-device"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-aloesdevice INTERFACE
    arduino-compat
)
