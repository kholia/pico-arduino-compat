add_library(pac-weatherstationdatarx INTERFACE)

target_sources(pac-weatherstationdatarx INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/WeatherStationDataRx/src/WeatherStationDataRx.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/WeatherStationDataRx/examples/WeatherStationDemo/WeatherStationDemo.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/WeatherStationDataRx/examples/WeatherStationDemo_oldStateFormat/WeatherStationDemo_oldStateFormat.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/WeatherStationDataRx/src/Ringbuffer.h"
  "${CMAKE_CURRENT_LIST_DIR}/WeatherStationDataRx/src/WeatherStationDataRx.h"
)

target_include_directories(pac-weatherstationdatarx INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/WeatherStationDataRx/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-weatherstationdatarx INTERFACE
    arduino-compat
)
