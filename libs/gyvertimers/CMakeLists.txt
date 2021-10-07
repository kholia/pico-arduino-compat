add_library(pac-gyvertimers INTERFACE)

target_sources(pac-gyvertimers INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/GyverTimers/src/GyverTimers.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/GyverTimers/src/GyverTimers.h"
)

target_include_directories(pac-gyvertimers INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/GyverTimers/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-gyvertimers INTERFACE
    arduino-compat
)
