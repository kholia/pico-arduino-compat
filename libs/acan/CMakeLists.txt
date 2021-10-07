add_library(pac-acan INTERFACE)

target_sources(pac-acan INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/acan/src/ACAN.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/acan/src/ACANSettings.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/acan/src/ACAN.h"
  "${CMAKE_CURRENT_LIST_DIR}/acan/src/ACANSettings.h"
  "${CMAKE_CURRENT_LIST_DIR}/acan/src/CANMessage.h"
)

target_include_directories(pac-acan INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/acan/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-acan INTERFACE
    arduino-compat
)
