add_library(tsicsensor INTERFACE)

target_sources(tsicsensor INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TsicSensor/src/TsicSensor.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TsicSensor/src/data/TsicData.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TsicSensor/src/TsicSensor.h"
  "${CMAKE_CURRENT_LIST_DIR}/TsicSensor/src/data/TsicData.h"
)

target_include_directories(tsicsensor INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TsicSensor/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(tsicsensor INTERFACE
    arduino-compat
)
