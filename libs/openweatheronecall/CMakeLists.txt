add_library(openweatheronecall INTERFACE)

target_sources(openweatheronecall INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/OpenWeatherOneCall/src/OpenWeatherOneCall.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/OpenWeatherOneCall/src/DateTimeConversion.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/OpenWeatherOneCall/src/NAComplete.h"
  "${CMAKE_CURRENT_LIST_DIR}/OpenWeatherOneCall/src/errMsgs.h"
  "${CMAKE_CURRENT_LIST_DIR}/OpenWeatherOneCall/src/OpenWeatherOneCall.h"
)

target_include_directories(openweatheronecall INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/OpenWeatherOneCall/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(openweatheronecall INTERFACE
    arduino-compat
)
