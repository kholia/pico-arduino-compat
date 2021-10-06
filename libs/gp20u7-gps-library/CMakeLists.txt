add_library(gp20u7-gps-library INTERFACE)

target_sources(gp20u7-gps-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/gp20u7_arduino/src/devices/gps/tinygps.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/gp20u7_arduino/src/devices/gps/gp20u7.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/gp20u7_arduino/src/gp20u7.h"
  "${CMAKE_CURRENT_LIST_DIR}/gp20u7_arduino/src/devices/gps/tinygps.h"
  "${CMAKE_CURRENT_LIST_DIR}/gp20u7_arduino/src/devices/gps/gp20u7.h"
  "${CMAKE_CURRENT_LIST_DIR}/gp20u7_arduino/src/api/gps.h"
  "${CMAKE_CURRENT_LIST_DIR}/gp20u7_arduino/src/platforms/platform.h"
)

target_include_directories(gp20u7-gps-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/gp20u7_arduino/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(gp20u7-gps-library INTERFACE
    arduino-compat
)
