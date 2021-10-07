add_library(pac-arduino_ov767x INTERFACE)

target_sources(pac-arduino_ov767x INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_OV767X/src/OV767X.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_OV767X/src/utility/ov7670_arduino_shim.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_OV767X/src/utility/ov7670.c"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_OV767X/src/OV767X.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_OV767X/src/Arduino_OV767X.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_OV767X/src/utility/ov7670.h"
)

target_include_directories(pac-arduino_ov767x INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Arduino_OV767X/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-arduino_ov767x INTERFACE
    arduino-compat
)
