add_library(pac-sensorplot-webinterface INTERFACE)

target_sources(pac-sensorplot-webinterface INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SensorPlot_WebInterface/sensorplot_webinterface.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SensorPlot_WebInterface/sensorplot_webinterface.h"
)

target_include_directories(pac-sensorplot-webinterface INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SensorPlot_WebInterface"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-sensorplot-webinterface INTERFACE
    arduino-compat
)
