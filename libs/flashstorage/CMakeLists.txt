add_library(pac-flashstorage INTERFACE)

target_sources(pac-flashstorage INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/FlashStorage/src/FlashAsEEPROM.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FlashStorage/src/FlashStorage.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FlashStorage/src/FlashStorage.h"
  "${CMAKE_CURRENT_LIST_DIR}/FlashStorage/src/FlashAsEEPROM.h"
)

target_include_directories(pac-flashstorage INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/FlashStorage/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-flashstorage INTERFACE
    arduino-compat
)
