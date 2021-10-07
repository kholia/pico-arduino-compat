add_library(pac-sensortobutton INTERFACE)

target_sources(pac-sensortobutton INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SensorToButton/src/SensorToButton.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SensorToButton/src/SensorToButton.h"
)

target_include_directories(pac-sensortobutton INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SensorToButton/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-sensortobutton INTERFACE
    arduino-compat
)
