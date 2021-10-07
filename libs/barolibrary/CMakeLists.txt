add_library(pac-barolibrary INTERFACE)

target_sources(pac-barolibrary INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/BaroSensor/BaroSensor.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/BaroSensor/BaroSensor.h"
)

target_include_directories(pac-barolibrary INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/BaroSensor"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-barolibrary INTERFACE
    arduino-compat
)
