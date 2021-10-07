add_library(pac-adafruit-bno08x-rvc INTERFACE)

target_sources(pac-adafruit-bno08x-rvc INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_BNO08x_RVC/Adafruit_BNO08x_RVC.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_BNO08x_RVC/Adafruit_BNO08x_RVC.h"
)

target_include_directories(pac-adafruit-bno08x-rvc INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_BNO08x_RVC"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-adafruit-bno08x-rvc INTERFACE
    arduino-compat
)
