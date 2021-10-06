add_library(polyline INTERFACE)

target_sources(polyline INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/PolylineArduino/src/Polyline.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/PolylineArduino/src/Polyline.h"
)

target_include_directories(polyline INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/PolylineArduino/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(polyline INTERFACE
    arduino-compat
)
