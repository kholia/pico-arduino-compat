add_library(pac-weathermeters INTERFACE)

target_sources(pac-weathermeters INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/WeatherMeters/WeatherMeters.h"
)

target_include_directories(pac-weathermeters INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/WeatherMeters"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-weathermeters INTERFACE
    arduino-compat
)
