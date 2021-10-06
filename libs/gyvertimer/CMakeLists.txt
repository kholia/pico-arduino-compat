add_library(gyvertimer INTERFACE)

target_sources(gyvertimer INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/GyverTimer/src/GyverTimer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/GyverTimer/src/GyverTimer.h"
)

target_include_directories(gyvertimer INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/GyverTimer/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(gyvertimer INTERFACE
    arduino-compat
)
