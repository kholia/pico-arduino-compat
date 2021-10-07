add_library(pac-xxtea-iot-crypt INTERFACE)

target_sources(pac-xxtea-iot-crypt INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/xxtea-iot-crypt/src/xxtea-lib.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/xxtea-iot-crypt/src/xxtea_core.c"
  "${CMAKE_CURRENT_LIST_DIR}/xxtea-iot-crypt/src/xxtea_core.h"
  "${CMAKE_CURRENT_LIST_DIR}/xxtea-iot-crypt/src/xxtea-lib.h"
)

target_include_directories(pac-xxtea-iot-crypt INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/xxtea-iot-crypt/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-xxtea-iot-crypt INTERFACE
    arduino-compat
)
