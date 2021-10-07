add_library(pac-grove-125khz-rfid-reader INTERFACE)

target_sources(pac-grove-125khz-rfid-reader INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/RFID_Library/SeeedRFID.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RFID_Library/SeeedRFID.h"
)

target_include_directories(pac-grove-125khz-rfid-reader INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/RFID_Library"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-grove-125khz-rfid-reader INTERFACE
    arduino-compat
)
