add_library(pac-dustsensor_kocoa INTERFACE)

target_sources(pac-dustsensor_kocoa INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/PMD4/dustSensor_kocoa.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/PMD4/dustSensor_kocoa.h"
)

target_include_directories(pac-dustsensor_kocoa INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/PMD4"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-dustsensor_kocoa INTERFACE
    arduino-compat
)
