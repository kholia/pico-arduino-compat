add_library(mfrc522 INTERFACE)

target_sources(mfrc522 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/rfid/src/MFRC522Extended.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/rfid/src/MFRC522.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/rfid/src/require_cpp11.h"
  "${CMAKE_CURRENT_LIST_DIR}/rfid/src/MFRC522Extended.h"
  "${CMAKE_CURRENT_LIST_DIR}/rfid/src/deprecated.h"
  "${CMAKE_CURRENT_LIST_DIR}/rfid/src/MFRC522.h"
)

target_include_directories(mfrc522 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/rfid/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(mfrc522 INTERFACE
    arduino-compat
)
