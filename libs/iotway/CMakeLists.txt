add_library(pac-iotway INTERFACE)

target_sources(pac-iotway INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/IoTWay-Arduino/AES.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/IoTWay-Arduino/MemoryFree.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/IoTWay-Arduino/IoTWay.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/IoTWay-Arduino/base64.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/IoTWay-Arduino/MemoryFree.h"
  "${CMAKE_CURRENT_LIST_DIR}/IoTWay-Arduino/AES_config.h"
  "${CMAKE_CURRENT_LIST_DIR}/IoTWay-Arduino/AES.h"
  "${CMAKE_CURRENT_LIST_DIR}/IoTWay-Arduino/IoTWay.h"
  "${CMAKE_CURRENT_LIST_DIR}/IoTWay-Arduino/base64.h"
)

target_include_directories(pac-iotway INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/IoTWay-Arduino"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-iotway INTERFACE
    arduino-compat
)
