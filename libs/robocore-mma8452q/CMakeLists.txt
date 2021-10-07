add_library(pac-robocore-mma8452q INTERFACE)

target_sources(pac-robocore-mma8452q INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/RoboCore_MMA8452Q/src/RoboCore_MMA8452Q.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RoboCore_MMA8452Q/src/RoboCore_MMA8452Q.h"
)

target_include_directories(pac-robocore-mma8452q INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/RoboCore_MMA8452Q/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-robocore-mma8452q INTERFACE
    arduino-compat
)
