add_library(pac-adafruit-mfrc630-rfid INTERFACE)

target_sources(pac-adafruit-mfrc630-rfid INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_MFRC630/Adafruit_MFRC630.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_MFRC630/Adafruit_MFRC630_consts.c"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_MFRC630/Adafruit_MFRC630_regs.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_MFRC630/Adafruit_MFRC630.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_MFRC630/Adafruit_MFRC630_consts.h"
)

target_include_directories(pac-adafruit-mfrc630-rfid INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_MFRC630"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-adafruit-mfrc630-rfid INTERFACE
    arduino-compat
)
