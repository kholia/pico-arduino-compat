add_library(firebase-esp32-client INTERFACE)

target_sources(firebase-esp32-client INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Firebase-ESP32/src/Firebase.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Firebase-ESP32/src/rtdb/QueryFilter.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Firebase-ESP32/src/rtdb/QueueInfo.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Firebase-ESP32/src/rtdb/QueueManager.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Firebase-ESP32/src/rtdb/FB_RTDB.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Firebase-ESP32/src/rtdb/stream/FB_Stream.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Firebase-ESP32/src/rtdb/stream/FB_MP_Stream.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Firebase-ESP32/src/json/FirebaseJson.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Firebase-ESP32/src/session/FB_Session.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Firebase-ESP32/src/wcs/esp32/FB_TCP_Client.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Firebase-ESP32/src/addons/fastcrc/FastCRCsw.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Firebase-ESP32/src/addons/fastcrc/FastCRChw.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Firebase-ESP32/src/signer/Signer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Firebase-ESP32/src/json/cJSON/cJSON_Utils.c"
  "${CMAKE_CURRENT_LIST_DIR}/Firebase-ESP32/src/json/cJSON/cJSON.c"
  "${CMAKE_CURRENT_LIST_DIR}/Firebase-ESP32/src/common.h"
  "${CMAKE_CURRENT_LIST_DIR}/Firebase-ESP32/src/FirebaseFS.h"
  "${CMAKE_CURRENT_LIST_DIR}/Firebase-ESP32/src/Utils.h"
  "${CMAKE_CURRENT_LIST_DIR}/Firebase-ESP32/src/FirebaseESP32.h"
  "${CMAKE_CURRENT_LIST_DIR}/Firebase-ESP32/src/Firebase.h"
  "${CMAKE_CURRENT_LIST_DIR}/Firebase-ESP32/src/rtdb/QueueInfo.h"
  "${CMAKE_CURRENT_LIST_DIR}/Firebase-ESP32/src/rtdb/QueueManager.h"
  "${CMAKE_CURRENT_LIST_DIR}/Firebase-ESP32/src/rtdb/QueryFilter.h"
  "${CMAKE_CURRENT_LIST_DIR}/Firebase-ESP32/src/rtdb/FB_RTDB.h"
  "${CMAKE_CURRENT_LIST_DIR}/Firebase-ESP32/src/rtdb/stream/FB_Stream.h"
  "${CMAKE_CURRENT_LIST_DIR}/Firebase-ESP32/src/rtdb/stream/FB_MP_Stream.h"
  "${CMAKE_CURRENT_LIST_DIR}/Firebase-ESP32/src/json/FirebaseJson.h"
  "${CMAKE_CURRENT_LIST_DIR}/Firebase-ESP32/src/json/cJSON/cJSON.h"
  "${CMAKE_CURRENT_LIST_DIR}/Firebase-ESP32/src/json/cJSON/cJSON_Utils.h"
  "${CMAKE_CURRENT_LIST_DIR}/Firebase-ESP32/src/session/FB_Session.h"
  "${CMAKE_CURRENT_LIST_DIR}/Firebase-ESP32/src/wcs/HTTPCode.h"
  "${CMAKE_CURRENT_LIST_DIR}/Firebase-ESP32/src/wcs/esp32/FB_TCP_Client.h"
  "${CMAKE_CURRENT_LIST_DIR}/Firebase-ESP32/src/addons/TokenHelper.h"
  "${CMAKE_CURRENT_LIST_DIR}/Firebase-ESP32/src/addons/RTDBHelper.h"
  "${CMAKE_CURRENT_LIST_DIR}/Firebase-ESP32/src/addons/FireSense/FireSense.h"
  "${CMAKE_CURRENT_LIST_DIR}/Firebase-ESP32/src/addons/fastcrc/FastCRC_cpu.h"
  "${CMAKE_CURRENT_LIST_DIR}/Firebase-ESP32/src/addons/fastcrc/FastCRC.h"
  "${CMAKE_CURRENT_LIST_DIR}/Firebase-ESP32/src/addons/fastcrc/FastCRC_tables.h"
  "${CMAKE_CURRENT_LIST_DIR}/Firebase-ESP32/src/signer/Signer.h"
)

target_include_directories(firebase-esp32-client INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Firebase-ESP32/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET official-sd)
    add_subdirectory(../../official-libs/sd build_official-sd)
endif()

target_link_libraries(firebase-esp32-client INTERFACE
    arduino-compat
    official-sd
)
