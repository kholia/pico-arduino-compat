add_library(pac-adafruit-9dof INTERFACE)

target_sources(pac-adafruit-9dof INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_9DOF/Adafruit_9DOF.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_9DOF/Adafruit_9DOF.h"
)

target_include_directories(pac-adafruit-9dof INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_9DOF"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-adafruit-9dof INTERFACE
    arduino-compat
)
