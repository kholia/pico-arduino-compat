add_library(pac-crc INTERFACE)

target_sources(pac-crc INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/CRC/CRC32.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/CRC/CRC16.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/CRC/CRC8.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/CRC/CRC64.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/CRC/test/unit_test_crc64.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/CRC/test/unit_test_crc8.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/CRC/test/unit_test_crc32.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/CRC/test/unit_test_crc16.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/CRC/test/unit_test_001.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/CRC/CRC32.h"
  "${CMAKE_CURRENT_LIST_DIR}/CRC/CRC16.h"
  "${CMAKE_CURRENT_LIST_DIR}/CRC/CRC64.h"
  "${CMAKE_CURRENT_LIST_DIR}/CRC/CRC.h"
  "${CMAKE_CURRENT_LIST_DIR}/CRC/CRC8.h"
)

target_include_directories(pac-crc INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/CRC"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-crc INTERFACE
    arduino-compat
)
