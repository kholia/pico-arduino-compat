add_library(pac-adsweather INTERFACE)

target_sources(pac-adsweather INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ADSWeather/src/ADSWeather.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ADSWeather/src/ADSWeather.h"
)

target_include_directories(pac-adsweather INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ADSWeather/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-adsweather INTERFACE
    arduino-compat
)
