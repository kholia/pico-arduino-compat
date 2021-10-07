add_library(pac-arduino_crc32 INTERFACE)

target_sources(pac-arduino_crc32 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_CRC32/src/crc.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_CRC32/src/Arduino_CRC32.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_CRC32/src/crc.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_CRC32/src/Arduino_CRC32.h"
)

target_include_directories(pac-arduino_crc32 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Arduino_CRC32/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-arduino_crc32 INTERFACE
    arduino-compat
)
