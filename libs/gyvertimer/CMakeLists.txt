add_library(pac-gyvertimer INTERFACE)

target_sources(pac-gyvertimer INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/GyverTimer/src/GyverTimer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/GyverTimer/src/GyverTimer.h"
)

target_include_directories(pac-gyvertimer INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/GyverTimer/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-gyvertimer INTERFACE
    arduino-compat
)
