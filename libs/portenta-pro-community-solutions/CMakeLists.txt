add_library(pac-portenta-pro-community-solutions INTERFACE)

target_sources(pac-portenta-pro-community-solutions INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/portenta-pro-community-solutions/src/TinyMqttPortentaEthernet.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/portenta-pro-community-solutions/src/TinyMqttPortentaWifi.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/portenta-pro-community-solutions/src/StringIndexer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/portenta-pro-community-solutions/src/MqttStreaming.h"
  "${CMAKE_CURRENT_LIST_DIR}/portenta-pro-community-solutions/src/TinyMqttPortentaEthernet.h"
  "${CMAKE_CURRENT_LIST_DIR}/portenta-pro-community-solutions/src/StringIndexer.h"
  "${CMAKE_CURRENT_LIST_DIR}/portenta-pro-community-solutions/src/portenta-pro-community-solutions.h"
  "${CMAKE_CURRENT_LIST_DIR}/portenta-pro-community-solutions/src/TinyMqttPortentaWifi.h"
  "${CMAKE_CURRENT_LIST_DIR}/portenta-pro-community-solutions/examples/e-portenta-machine-learning/e-b-portenta-rocksetta-ml/e-b-a-rocksetta-hello-ml-sine/rocksetta.h"
  "${CMAKE_CURRENT_LIST_DIR}/portenta-pro-community-solutions/examples/e-portenta-machine-learning/e-b-portenta-rocksetta-ml/e-b-a-rocksetta-hello-ml-sine/model.h"
  "${CMAKE_CURRENT_LIST_DIR}/portenta-pro-community-solutions/examples/b-portenta-h7-with-accessories/b-a-sensors/b-a-b-pixy2-SPI/TPixy2.h"
  "${CMAKE_CURRENT_LIST_DIR}/portenta-pro-community-solutions/examples/b-portenta-h7-with-accessories/b-a-sensors/b-a-b-pixy2-SPI/Pixy2CCC.h"
  "${CMAKE_CURRENT_LIST_DIR}/portenta-pro-community-solutions/examples/b-portenta-h7-with-accessories/b-a-sensors/b-a-b-pixy2-SPI/PIDLoop.h"
  "${CMAKE_CURRENT_LIST_DIR}/portenta-pro-community-solutions/examples/b-portenta-h7-with-accessories/b-a-sensors/b-a-b-pixy2-SPI/Pixy2I2C.h"
  "${CMAKE_CURRENT_LIST_DIR}/portenta-pro-community-solutions/examples/b-portenta-h7-with-accessories/b-a-sensors/b-a-b-pixy2-SPI/Pixy2Video.h"
  "${CMAKE_CURRENT_LIST_DIR}/portenta-pro-community-solutions/examples/b-portenta-h7-with-accessories/b-a-sensors/b-a-b-pixy2-SPI/Pixy2.h"
  "${CMAKE_CURRENT_LIST_DIR}/portenta-pro-community-solutions/examples/b-portenta-h7-with-accessories/b-a-sensors/b-a-b-pixy2-SPI/Pixy2Line.h"
  "${CMAKE_CURRENT_LIST_DIR}/portenta-pro-community-solutions/examples/b-portenta-h7-with-accessories/b-a-sensors/b-a-b-pixy2-SPI/Pixy2SPI_SS.h"
  "${CMAKE_CURRENT_LIST_DIR}/portenta-pro-community-solutions/examples/b-portenta-h7-with-accessories/b-a-sensors/b-a-b-pixy2-SPI/Pixy2UART.h"
)

target_include_directories(pac-portenta-pro-community-solutions INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/portenta-pro-community-solutions/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-portenta-pro-community-solutions INTERFACE
    arduino-compat
)
