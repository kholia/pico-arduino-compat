add_library(pac-yosemitechmodbus INTERFACE)

target_sources(pac-yosemitechmodbus INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/YosemitechModbus/src/YosemitechModbus.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/YosemitechModbus/src/YosemitechModbus.h"
)

target_include_directories(pac-yosemitechmodbus INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/YosemitechModbus/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-yosemitechmodbus INTERFACE
    arduino-compat
)
