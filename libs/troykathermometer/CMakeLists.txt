add_library(troykathermometer INTERFACE)

target_sources(troykathermometer INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TroykaThermometer/src/TroykaThermometer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TroykaThermometer/src/TroykaThermometer.h"
)

target_include_directories(troykathermometer INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TroykaThermometer/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(troykathermometer INTERFACE
    arduino-compat
)
