add_library(adafruit-soundboard-library INTERFACE)

target_sources(adafruit-soundboard-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_Soundboard_library/Adafruit_Soundboard.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_Soundboard_library/Adafruit_Soundboard.h"
)

target_include_directories(adafruit-soundboard-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_Soundboard_library"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(adafruit-soundboard-library INTERFACE
    arduino-compat
)
