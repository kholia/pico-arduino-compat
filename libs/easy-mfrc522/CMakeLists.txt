add_library(pac-easy-mfrc522 INTERFACE)

target_sources(pac-easy-mfrc522 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/easy_mfrc522/src/RfidDictionaryView.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/easy_mfrc522/src/EasyMFRC522.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/easy_mfrc522/src/EasyMFRC522.h"
  "${CMAKE_CURRENT_LIST_DIR}/easy_mfrc522/src/RfidDictionaryView.h"
)

target_include_directories(pac-easy-mfrc522 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/easy_mfrc522/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-easy-mfrc522 INTERFACE
    arduino-compat
)
