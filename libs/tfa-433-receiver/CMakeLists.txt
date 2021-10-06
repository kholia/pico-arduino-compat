add_library(tfa-433-receiver INTERFACE)

target_sources(tfa-433-receiver INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TFA433/src/tfa433.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TFA433/src/tfa433.h"
)

target_include_directories(tfa-433-receiver INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TFA433/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(tfa-433-receiver INTERFACE
    arduino-compat
)
