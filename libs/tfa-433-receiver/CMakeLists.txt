add_library(pac-tfa-433-receiver INTERFACE)

target_sources(pac-tfa-433-receiver INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TFA433/src/tfa433.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TFA433/src/tfa433.h"
)

target_include_directories(pac-tfa-433-receiver INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TFA433/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-tfa-433-receiver INTERFACE
    arduino-compat
)
