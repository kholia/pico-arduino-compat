add_library(flashstorage INTERFACE)

target_sources(flashstorage INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/FlashStorage/src/FlashAsEEPROM.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FlashStorage/src/FlashStorage.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FlashStorage/src/FlashStorage.h"
  "${CMAKE_CURRENT_LIST_DIR}/FlashStorage/src/FlashAsEEPROM.h"
)

target_include_directories(flashstorage INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/FlashStorage/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(flashstorage INTERFACE
    arduino-compat
)
