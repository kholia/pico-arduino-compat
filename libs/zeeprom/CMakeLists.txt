add_library(pac-zeeprom INTERFACE)

target_sources(pac-zeeprom INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Zeeprom/ZEeprom.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Zeeprom/ZEeprom.h"
)

target_include_directories(pac-zeeprom INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Zeeprom"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-zeeprom INTERFACE
    arduino-compat
)
