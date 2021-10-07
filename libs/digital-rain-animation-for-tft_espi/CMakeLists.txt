add_library(pac-digital-rain-animation-for-tft_espi INTERFACE)

target_sources(pac-digital-rain-animation-for-tft_espi INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TP_Arduino_DigitalRain_Anim/src/DigitalRainAnim.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TP_Arduino_DigitalRain_Anim/src/DigitalRainAnim.h"
)

target_include_directories(pac-digital-rain-animation-for-tft_espi INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TP_Arduino_DigitalRain_Anim/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-digital-rain-animation-for-tft_espi INTERFACE
    arduino-compat
)
