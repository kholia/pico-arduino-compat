add_library(iotesla-client INTERFACE)

target_sources(iotesla-client INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/arduino-IoTesla-client/src/IoTesla-client.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-IoTesla-client/src/IoTesla-client.h"
)

target_include_directories(iotesla-client INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/arduino-IoTesla-client/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(iotesla-client INTERFACE
    arduino-compat
)
