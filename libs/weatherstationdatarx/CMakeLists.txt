add_library(weatherstationdatarx INTERFACE)

target_sources(weatherstationdatarx INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/WeatherStationDataRx/src/WeatherStationDataRx.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/WeatherStationDataRx/examples/WeatherStationDemo/WeatherStationDemo.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/WeatherStationDataRx/examples/WeatherStationDemo_oldStateFormat/WeatherStationDemo_oldStateFormat.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/WeatherStationDataRx/src/Ringbuffer.h"
  "${CMAKE_CURRENT_LIST_DIR}/WeatherStationDataRx/src/WeatherStationDataRx.h"
)

target_include_directories(weatherstationdatarx INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/WeatherStationDataRx/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(weatherstationdatarx INTERFACE
    arduino-compat
)
