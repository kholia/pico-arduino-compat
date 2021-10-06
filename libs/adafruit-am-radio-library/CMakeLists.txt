add_library(adafruit-am-radio-library INTERFACE)

target_sources(adafruit-am-radio-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_AMRadio/Adafruit_AMRadio.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_AMRadio/Adafruit_AMRadio.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_AMRadio/examples/zilla/zilla.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_AMRadio/examples/melody/pitches.h"
)

target_include_directories(adafruit-am-radio-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_AMRadio"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(adafruit-am-radio-library INTERFACE
    arduino-compat
)
