add_library(pmsensor INTERFACE)

target_sources(pmsensor INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/PMsensor/src/PMsensor.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/PMsensor/src/PMsensor.h"
)

target_include_directories(pmsensor INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/PMsensor/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pmsensor INTERFACE
    arduino-compat
)
