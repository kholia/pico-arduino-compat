add_library(pac-flashlightled INTERFACE)

target_sources(pac-flashlightled INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/FlashLightLED/src/FlashlightLED.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FlashLightLED/src/FlashlightLED.h"
)

target_include_directories(pac-flashlightled INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/FlashLightLED/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-flashlightled INTERFACE
    arduino-compat
)
