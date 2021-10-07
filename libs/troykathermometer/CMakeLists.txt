add_library(pac-troykathermometer INTERFACE)

target_sources(pac-troykathermometer INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TroykaThermometer/src/TroykaThermometer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TroykaThermometer/src/TroykaThermometer.h"
)

target_include_directories(pac-troykathermometer INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TroykaThermometer/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-troykathermometer INTERFACE
    arduino-compat
)
