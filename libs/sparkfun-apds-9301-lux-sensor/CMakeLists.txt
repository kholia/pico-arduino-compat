add_library(pac-sparkfun-apds-9301-lux-sensor INTERFACE)

target_sources(pac-sparkfun-apds-9301-lux-sensor INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_APDS9301_Library/src/Sparkfun_APDS9301_Library.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_APDS9301_Library/src/Sparkfun_APDS9301_Library.h"
)

target_include_directories(pac-sparkfun-apds-9301-lux-sensor INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SparkFun_APDS9301_Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-sparkfun-apds-9301-lux-sensor INTERFACE
    arduino-compat
)
