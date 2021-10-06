add_library(adsweather INTERFACE)

target_sources(adsweather INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ADSWeather/src/ADSWeather.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ADSWeather/src/ADSWeather.h"
)

target_include_directories(adsweather INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ADSWeather/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(adsweather INTERFACE
    arduino-compat
)
