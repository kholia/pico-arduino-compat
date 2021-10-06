add_library(gyverpower INTERFACE)

target_sources(gyverpower INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/GyverPower/src/GyverPower.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/GyverPower/src/GyverPower.h"
  "${CMAKE_CURRENT_LIST_DIR}/GyverPower/src/powerConstants.h"
  "${CMAKE_CURRENT_LIST_DIR}/GyverPower/examples/powersaveMillis/uptime2.h"
)

target_include_directories(gyverpower INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/GyverPower/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(gyverpower INTERFACE
    arduino-compat
)
