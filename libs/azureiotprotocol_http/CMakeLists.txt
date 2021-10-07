add_library(pac-azureiotprotocol_http INTERFACE)

target_sources(pac-azureiotprotocol_http INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/azure-iot-arduino-protocol-http/src/azure_uhttp_c/httpapi_compact.c"
  "${CMAKE_CURRENT_LIST_DIR}/azure-iot-arduino-protocol-http/src/AzureIoTProtocol_HTTP.h"
)

target_include_directories(pac-azureiotprotocol_http INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/azure-iot-arduino-protocol-http/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-azureiotprotocol_http INTERFACE
    arduino-compat
)
