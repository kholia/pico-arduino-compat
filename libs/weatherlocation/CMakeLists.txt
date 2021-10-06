add_library(weatherlocation INTERFACE)

target_sources(weatherlocation INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/weatherLocation-Library/src/weatherLocation.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/weatherLocation-Library/src/weatherLocation.h"
)

target_include_directories(weatherlocation INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/weatherLocation-Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(weatherlocation INTERFACE
    arduino-compat
)
