add_library(pac-pmsensor INTERFACE)

target_sources(pac-pmsensor INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/PMsensor/src/PMsensor.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/PMsensor/src/PMsensor.h"
)

target_include_directories(pac-pmsensor INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/PMsensor/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-pmsensor INTERFACE
    arduino-compat
)
