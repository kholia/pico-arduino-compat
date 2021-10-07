add_library(pac-mfrc522-spi-i2c-uart-async INTERFACE)

target_sources(pac-mfrc522-spi-i2c-uart-async INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/rfid/src/MFRC522_i2c.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/rfid/src/MFRC522Extended.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/rfid/src/MFRC522_spi.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/rfid/src/MFRC522.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/rfid/src/require_cpp11.h"
  "${CMAKE_CURRENT_LIST_DIR}/rfid/src/MFRC522Extended.h"
  "${CMAKE_CURRENT_LIST_DIR}/rfid/src/deprecated.h"
  "${CMAKE_CURRENT_LIST_DIR}/rfid/src/MFRC522.h"
)

target_include_directories(pac-mfrc522-spi-i2c-uart-async INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/rfid/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-mfrc522-spi-i2c-uart-async INTERFACE
    arduino-compat
)
