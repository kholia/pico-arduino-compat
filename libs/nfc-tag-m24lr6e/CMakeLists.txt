add_library(pac-nfc-tag-m24lr6e INTERFACE)

target_sources(pac-nfc-tag-m24lr6e INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/NFC_Tag_M24LR6E/NfcTag.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/NFC_Tag_M24LR6E/NfcTag.h"
)

target_include_directories(pac-nfc-tag-m24lr6e INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/NFC_Tag_M24LR6E"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-nfc-tag-m24lr6e INTERFACE
    arduino-compat
)
