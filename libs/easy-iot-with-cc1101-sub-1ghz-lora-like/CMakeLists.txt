add_library(easy-iot-with-cc1101-sub-1ghz-lora-like INTERFACE)

target_sources(easy-iot-with-cc1101-sub-1ghz-lora-like INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Easy-IoT-Arduino-CC1101-LORA/cc1101.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Easy-IoT-Arduino-CC1101-LORA/examples/AES_TX_and_RX/AES.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Easy-IoT-Arduino-CC1101-LORA/cc1101.h"
  "${CMAKE_CURRENT_LIST_DIR}/Easy-IoT-Arduino-CC1101-LORA/cc1101_custom_config.h"
  "${CMAKE_CURRENT_LIST_DIR}/Easy-IoT-Arduino-CC1101-LORA/ccpacket.h"
  "${CMAKE_CURRENT_LIST_DIR}/Easy-IoT-Arduino-CC1101-LORA/examples/AES_TX_and_RX/AES_config.h"
  "${CMAKE_CURRENT_LIST_DIR}/Easy-IoT-Arduino-CC1101-LORA/examples/AES_TX_and_RX/AES.h"
)

target_include_directories(easy-iot-with-cc1101-sub-1ghz-lora-like INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Easy-IoT-Arduino-CC1101-LORA"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(easy-iot-with-cc1101-sub-1ghz-lora-like INTERFACE
    arduino-compat
)
