add_library(sparkfun-dmx-shield-library INTERFACE)

target_sources(sparkfun-dmx-shield-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SparkFunDMX/src/SparkFunDMX.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFunDMX/src/SparkFunDMX.h"
)

target_include_directories(sparkfun-dmx-shield-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SparkFunDMX/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(sparkfun-dmx-shield-library INTERFACE
    arduino-compat
)
