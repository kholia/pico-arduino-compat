add_library(pac-iotivity-lite_arduino-porting INTERFACE)

target_sources(pac-iotivity-lite_arduino-porting INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/IoTivity-Lite_arduino-porting/src/w5100socket.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/IoTivity-Lite_arduino-porting/src/log.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/IoTivity-Lite_arduino-porting/src/random.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/IoTivity-Lite_arduino-porting/src/abort.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/IoTivity-Lite_arduino-porting/src/oc_clock.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/IoTivity-Lite_arduino-porting/src/ipadapter.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/IoTivity-Lite_arduino-porting/src/w5100socket_ex.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/IoTivity-Lite_arduino-porting/src/storage.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/IoTivity-Lite_arduino-porting/src/ethadapter_utils.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/IoTivity-Lite_arduino-porting/src/ipcontext.h"
  "${CMAKE_CURRENT_LIST_DIR}/IoTivity-Lite_arduino-porting/src/oc_config.h"
  "${CMAKE_CURRENT_LIST_DIR}/IoTivity-Lite_arduino-porting/src/ethadapter_utils.h"
  "${CMAKE_CURRENT_LIST_DIR}/IoTivity-Lite_arduino-porting/src/w5100socket.h"
)

target_include_directories(pac-iotivity-lite_arduino-porting INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/IoTivity-Lite_arduino-porting/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-iotivity-lite_arduino-porting INTERFACE
    arduino-compat
)
