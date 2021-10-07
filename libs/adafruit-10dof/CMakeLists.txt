add_library(pac-adafruit-10dof INTERFACE)

target_sources(pac-adafruit-10dof INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_10DOF/Adafruit_10DOF.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_10DOF/Adafruit_10DOF.h"
)

target_include_directories(pac-adafruit-10dof INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_10DOF"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-adafruit-10dof INTERFACE
    arduino-compat
)
