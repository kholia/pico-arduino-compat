add_library(barolibrary INTERFACE)

target_sources(barolibrary INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/BaroSensor/BaroSensor.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/BaroSensor/BaroSensor.h"
)

target_include_directories(barolibrary INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/BaroSensor"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(barolibrary INTERFACE
    arduino-compat
)
