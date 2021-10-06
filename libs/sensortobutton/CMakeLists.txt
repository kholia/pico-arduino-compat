add_library(sensortobutton INTERFACE)

target_sources(sensortobutton INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SensorToButton/src/SensorToButton.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SensorToButton/src/SensorToButton.h"
)

target_include_directories(sensortobutton INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SensorToButton/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(sensortobutton INTERFACE
    arduino-compat
)
