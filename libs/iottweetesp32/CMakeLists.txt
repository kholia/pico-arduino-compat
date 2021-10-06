add_library(iottweetesp32 INTERFACE)

target_sources(iottweetesp32 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/IoTtweetESP32/src/IoTtweetESP32.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/IoTtweetESP32/src/IoTtweetESP32.h"
)

target_include_directories(iottweetesp32 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/IoTtweetESP32/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(iottweetesp32 INTERFACE
    arduino-compat
)
