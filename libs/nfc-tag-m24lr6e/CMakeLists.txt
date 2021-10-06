add_library(nfc-tag-m24lr6e INTERFACE)

target_sources(nfc-tag-m24lr6e INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/NFC_Tag_M24LR6E/NfcTag.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/NFC_Tag_M24LR6E/NfcTag.h"
)

target_include_directories(nfc-tag-m24lr6e INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/NFC_Tag_M24LR6E"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(nfc-tag-m24lr6e INTERFACE
    arduino-compat
)
