add_library(pac-dsc-keybus-interface INTERFACE)

target_sources(pac-dsc-keybus-interface INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/dscKeybusInterface/src/dscKeybusPrintData.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/dscKeybusInterface/src/dscKeybusInterface.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/dscKeybusInterface/src/dscKeybusProcessData.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/dscKeybusInterface/extras/ESPHome/dscKeybusInterface/dscAlarm.h"
  "${CMAKE_CURRENT_LIST_DIR}/dscKeybusInterface/src/dscKeybusInterface.h"
)

target_include_directories(pac-dsc-keybus-interface INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/dscKeybusInterface/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-dsc-keybus-interface INTERFACE
    arduino-compat
)
