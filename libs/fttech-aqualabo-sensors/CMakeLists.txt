add_library(fttech-aqualabo-sensors INTERFACE)

target_sources(fttech-aqualabo-sensors INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/AqualaboSensor/src/AqualaboSensor.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AqualaboSensor/src/AqualaboSensor.h"
  "${CMAKE_CURRENT_LIST_DIR}/AqualaboSensor/src/utility/logging.h"
)

target_include_directories(fttech-aqualabo-sensors INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/AqualaboSensor/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(fttech-aqualabo-sensors INTERFACE
    arduino-compat
)
