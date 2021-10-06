add_library(digital-rain-animation-for-tft_espi INTERFACE)

target_sources(digital-rain-animation-for-tft_espi INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TP_Arduino_DigitalRain_Anim/src/DigitalRainAnim.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TP_Arduino_DigitalRain_Anim/src/DigitalRainAnim.h"
)

target_include_directories(digital-rain-animation-for-tft_espi INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TP_Arduino_DigitalRain_Anim/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(digital-rain-animation-for-tft_espi INTERFACE
    arduino-compat
)
