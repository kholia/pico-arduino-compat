add_library(pac-iottweetnbiot INTERFACE)

target_sources(pac-iottweetnbiot INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/IoTtweetNBIoT/src/IoTtweetNBIoT.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/IoTtweetNBIoT/src/IoTtweetNBIoT.h"
)

target_include_directories(pac-iottweetnbiot INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/IoTtweetNBIoT/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-iottweetnbiot INTERFACE
    arduino-compat
)
