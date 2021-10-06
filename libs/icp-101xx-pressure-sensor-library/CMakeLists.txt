add_library(icp-101xx-pressure-sensor-library INTERFACE)

target_sources(icp-101xx-pressure-sensor-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/icp-101xx/icp101xx.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/icp-101xx/extras/stm32-hal/icp101xx.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/icp-101xx/extras/mbed/icp101xx.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/icp-101xx/icp101xx.h"
  "${CMAKE_CURRENT_LIST_DIR}/icp-101xx/extras/stm32-hal/icp101xx.h"
  "${CMAKE_CURRENT_LIST_DIR}/icp-101xx/extras/mbed/icp101xx.h"
)

target_include_directories(icp-101xx-pressure-sensor-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/icp-101xx"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(icp-101xx-pressure-sensor-library INTERFACE
    arduino-compat
)
