add_library(pac-tsicsensor INTERFACE)

target_sources(pac-tsicsensor INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TsicSensor/src/TsicSensor.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TsicSensor/src/data/TsicData.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TsicSensor/src/TsicSensor.h"
  "${CMAKE_CURRENT_LIST_DIR}/TsicSensor/src/data/TsicData.h"
)

target_include_directories(pac-tsicsensor INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TsicSensor/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-tsicsensor INTERFACE
    arduino-compat
)
