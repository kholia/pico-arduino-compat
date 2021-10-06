add_library(littlefs_mbed_rp2040 INTERFACE)

target_sources(littlefs_mbed_rp2040 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/LittleFS_Mbed_RP2040/src_cpp/LittleFS_Mbed_RP2040.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LittleFS_Mbed_RP2040/src/LittleFS_Mbed_RP2040.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/LittleFS_Mbed_RP2040/src_h/LittleFS_Mbed_RP2040.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/LittleFS_Mbed_RP2040/src_cpp/LittleFS_Mbed_RP2040.h"
  "${CMAKE_CURRENT_LIST_DIR}/LittleFS_Mbed_RP2040/src_cpp/LittleFS_Mbed_RP2040_Debug.h"
  "${CMAKE_CURRENT_LIST_DIR}/LittleFS_Mbed_RP2040/src/LittleFS_Mbed_RP2040.h"
  "${CMAKE_CURRENT_LIST_DIR}/LittleFS_Mbed_RP2040/src/LittleFS_Mbed_RP2040_Debug.h"
  "${CMAKE_CURRENT_LIST_DIR}/LittleFS_Mbed_RP2040/src_h/LittleFS_Mbed_RP2040.h"
  "${CMAKE_CURRENT_LIST_DIR}/LittleFS_Mbed_RP2040/src_h/LittleFS_Mbed_RP2040_Debug.h"
)

target_include_directories(littlefs_mbed_rp2040 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/LittleFS_Mbed_RP2040/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(littlefs_mbed_rp2040 INTERFACE
    arduino-compat
)
