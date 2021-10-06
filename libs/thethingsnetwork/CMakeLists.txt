add_library(thethingsnetwork INTERFACE)

target_sources(thethingsnetwork INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/arduino-device-lib/src/CayenneLPP.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-device-lib/src/TheThingsNetwork.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-device-lib/src/TheThingsMessage.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-device-lib/src/pb_decode.c"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-device-lib/src/appData.pb.c"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-device-lib/src/deviceData.pb.c"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-device-lib/src/pb_common.c"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-device-lib/src/pb_encode.c"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-device-lib/src/pb_encode.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-device-lib/src/deviceData.pb.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-device-lib/src/pb.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-device-lib/src/CayenneLPP.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-device-lib/src/TheThingsMessage.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-device-lib/src/appData.pb.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-device-lib/src/pb_decode.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-device-lib/src/pb_common.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-device-lib/src/TheThingsNetwork.h"
)

target_include_directories(thethingsnetwork INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/arduino-device-lib/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(thethingsnetwork INTERFACE
    arduino-compat
)
