add_library(pac-legosensoradapter INTERFACE)

target_sources(pac-legosensoradapter INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/LegoSensorAdapter/src/LegoSensorAdapter.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LegoSensorAdapter/src/LegoSensorAdapter.h"
)

target_include_directories(pac-legosensoradapter INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/LegoSensorAdapter/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-legosensoradapter INTERFACE
    arduino-compat
)
