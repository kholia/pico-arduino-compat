add_library(gyvertimers INTERFACE)

target_sources(gyvertimers INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/GyverTimers/src/GyverTimers.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/GyverTimers/src/GyverTimers.h"
)

target_include_directories(gyvertimers INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/GyverTimers/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(gyvertimers INTERFACE
    arduino-compat
)
