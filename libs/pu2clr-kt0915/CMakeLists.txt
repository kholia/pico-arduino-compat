add_library(pu2clr-kt0915 INTERFACE)

target_sources(pu2clr-kt0915 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/KT0915/KT0915.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/KT0915/examples/KT0915_02_OLED/KT0915_02_OLED/Rotary.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/KT0915/examples/KT0915_03_TFT_DISPLAY/Rotary.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/KT0915/KT0915.h"
  "${CMAKE_CURRENT_LIST_DIR}/KT0915/examples/KT0915_02_OLED/KT0915_02_OLED/Rotary.h"
  "${CMAKE_CURRENT_LIST_DIR}/KT0915/examples/KT0915_03_TFT_DISPLAY/Serif_plain_7.h"
  "${CMAKE_CURRENT_LIST_DIR}/KT0915/examples/KT0915_03_TFT_DISPLAY/Rotary.h"
  "${CMAKE_CURRENT_LIST_DIR}/KT0915/examples/KT0915_03_TFT_DISPLAY/Serif_plain_14.h"
  "${CMAKE_CURRENT_LIST_DIR}/KT0915/examples/KT0915_03_TFT_DISPLAY/DSEG7_Classic_Mini_Regular_30.h"
)

target_include_directories(pu2clr-kt0915 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/KT0915"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pu2clr-kt0915 INTERFACE
    arduino-compat
)
