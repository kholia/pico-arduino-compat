add_library(pac-weatherlocation INTERFACE)

target_sources(pac-weatherlocation INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/weatherLocation-Library/src/weatherLocation.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/weatherLocation-Library/src/weatherLocation.h"
)

target_include_directories(pac-weatherlocation INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/weatherLocation-Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-weatherlocation INTERFACE
    arduino-compat
)
