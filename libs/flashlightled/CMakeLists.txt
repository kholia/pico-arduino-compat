add_library(flashlightled INTERFACE)

target_sources(flashlightled INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/FlashLightLED/src/FlashlightLED.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FlashLightLED/src/FlashlightLED.h"
)

target_include_directories(flashlightled INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/FlashLightLED/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(flashlightled INTERFACE
    arduino-compat
)
