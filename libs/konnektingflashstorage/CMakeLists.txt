add_library(pac-konnektingflashstorage INTERFACE)

target_sources(pac-konnektingflashstorage INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/KonnektingFlashStorage/src/FlashAsEEPROM.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/KonnektingFlashStorage/src/FlashStorage.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/KonnektingFlashStorage/src/FlashStorage.h"
  "${CMAKE_CURRENT_LIST_DIR}/KonnektingFlashStorage/src/FlashAsEEPROM.h"
)

target_include_directories(pac-konnektingflashstorage INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/KonnektingFlashStorage/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-konnektingflashstorage INTERFACE
    arduino-compat
)
