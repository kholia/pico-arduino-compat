add_library(pac-ueepromlib INTERFACE)

target_sources(pac-ueepromlib INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/uEEPROMLib/src/uEEPROMLib.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/uEEPROMLib/src/uEEPROMLib.h"
)

target_include_directories(pac-ueepromlib INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/uEEPROMLib/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-ueepromlib INTERFACE
    arduino-compat
)
