add_library(adafruit-pixie INTERFACE)

target_sources(adafruit-pixie INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_Pixie/Adafruit_Pixie.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_Pixie/Adafruit_Pixie.h"
)

target_include_directories(adafruit-pixie INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_Pixie"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(adafruit-pixie INTERFACE
    arduino-compat
)
