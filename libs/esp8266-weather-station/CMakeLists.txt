add_library(pac-esp8266-weather-station INTERFACE)

target_sources(pac-esp8266-weather-station INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/esp8266-weather-station/src/MetOfficeClient.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/esp8266-weather-station/src/AerisObservations.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/esp8266-weather-station/src/WorldClockClient.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/esp8266-weather-station/src/NTPClient.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/esp8266-weather-station/src/ThingspeakClient.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/esp8266-weather-station/src/OpenWeatherMapOneCall.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/esp8266-weather-station/src/OpenWeatherMapCurrent.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/esp8266-weather-station/src/AerisSunMoon.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/esp8266-weather-station/src/OpenWeatherMapForecast.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/esp8266-weather-station/src/SunMoonCalc.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/esp8266-weather-station/src/AerisForecasts.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/esp8266-weather-station/src/Astronomy.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/esp8266-weather-station/src/TimeClient.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/esp8266-weather-station/examples/PlaneSpotterDemo/AdsbExchangeClient.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/esp8266-weather-station/src/OpenWeatherMapForecast.h"
  "${CMAKE_CURRENT_LIST_DIR}/esp8266-weather-station/src/SunMoonCalc.h"
  "${CMAKE_CURRENT_LIST_DIR}/esp8266-weather-station/src/OpenWeatherMapCurrent.h"
  "${CMAKE_CURRENT_LIST_DIR}/esp8266-weather-station/src/OpenWeatherMapOneCall.h"
  "${CMAKE_CURRENT_LIST_DIR}/esp8266-weather-station/src/WorldClockClient.h"
  "${CMAKE_CURRENT_LIST_DIR}/esp8266-weather-station/src/AerisSunMoon.h"
  "${CMAKE_CURRENT_LIST_DIR}/esp8266-weather-station/src/NTPClient.h"
  "${CMAKE_CURRENT_LIST_DIR}/esp8266-weather-station/src/ESPWiFi.h"
  "${CMAKE_CURRENT_LIST_DIR}/esp8266-weather-station/src/TimeClient.h"
  "${CMAKE_CURRENT_LIST_DIR}/esp8266-weather-station/src/ThingspeakClient.h"
  "${CMAKE_CURRENT_LIST_DIR}/esp8266-weather-station/src/Astronomy.h"
  "${CMAKE_CURRENT_LIST_DIR}/esp8266-weather-station/src/AerisForecasts.h"
  "${CMAKE_CURRENT_LIST_DIR}/esp8266-weather-station/src/AerisObservations.h"
  "${CMAKE_CURRENT_LIST_DIR}/esp8266-weather-station/src/MetOfficeClient.h"
  "${CMAKE_CURRENT_LIST_DIR}/esp8266-weather-station/src/ESPHTTPClient.h"
  "${CMAKE_CURRENT_LIST_DIR}/esp8266-weather-station/examples/PlaneSpotterDemo/AdsbExchangeClient.h"
  "${CMAKE_CURRENT_LIST_DIR}/esp8266-weather-station/examples/PlaneSpotterDemo/images.h"
  "${CMAKE_CURRENT_LIST_DIR}/esp8266-weather-station/examples/WeatherStationDemo/WeatherStationImages.h"
  "${CMAKE_CURRENT_LIST_DIR}/esp8266-weather-station/examples/WeatherStationDemo/WeatherStationFonts.h"
  "${CMAKE_CURRENT_LIST_DIR}/esp8266-weather-station/examples/WorldClockDemo/fonts.h"
  "${CMAKE_CURRENT_LIST_DIR}/esp8266-weather-station/examples/WorldClockDemo/icons.h"
)

target_include_directories(pac-esp8266-weather-station INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/esp8266-weather-station/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-esp8266-weather-station INTERFACE
    arduino-compat
)
