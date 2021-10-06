add_library(ht1632 INTERFACE)

target_sources(ht1632 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/HT1632/Adafruit_HT1632.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/HT1632/Adafruit_HT1632.h"
)

target_include_directories(ht1632 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/HT1632"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET adafruit-gfx-library)
    add_subdirectory(../../libs/adafruit-gfx-library build_adafruit-gfx-library)
endif()

target_link_libraries(ht1632 INTERFACE
    arduino-compat
    adafruit-gfx-library
)
