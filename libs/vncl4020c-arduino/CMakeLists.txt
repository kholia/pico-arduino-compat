add_library(pac-vncl4020c-arduino INTERFACE)

target_sources(pac-vncl4020c-arduino INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/VNCL4020C-Arduino/src/heartRate.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/VNCL4020C-Arduino/src/vcnl4020c.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/VNCL4020C-Arduino/src/heartRate.h"
  "${CMAKE_CURRENT_LIST_DIR}/VNCL4020C-Arduino/src/vcnl4020c.h"
)

target_include_directories(pac-vncl4020c-arduino INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/VNCL4020C-Arduino/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-vncl4020c-arduino INTERFACE
    arduino-compat
)
