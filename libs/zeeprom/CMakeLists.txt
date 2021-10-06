add_library(zeeprom INTERFACE)

target_sources(zeeprom INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Zeeprom/ZEeprom.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Zeeprom/ZEeprom.h"
)

target_include_directories(zeeprom INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Zeeprom"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(zeeprom INTERFACE
    arduino-compat
)
