add_library(leaphy-extra-extension INTERFACE)

target_sources(leaphy-extra-extension INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/leaphy-extensions-extra/src/ledstrip.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/leaphy-extensions-extra/src/Adafruit_NeoPixel.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/leaphy-extensions-extra/src/Adafruit_TCS34725.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/leaphy-extensions-extra/src/Leaphy_Extra.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/leaphy-extensions-extra/src/Adafruit_TCS34725.h"
  "${CMAKE_CURRENT_LIST_DIR}/leaphy-extensions-extra/src/ledstrip.h"
  "${CMAKE_CURRENT_LIST_DIR}/leaphy-extensions-extra/src/Adafruit_NeoPixel.h"
  "${CMAKE_CURRENT_LIST_DIR}/leaphy-extensions-extra/src/Leaphy_Extra.h"
)

target_include_directories(leaphy-extra-extension INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/leaphy-extensions-extra/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(leaphy-extra-extension INTERFACE
    arduino-compat
)
