add_library(gyverrelay INTERFACE)

target_sources(gyverrelay INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/GyverRelay/src/GyverRelay.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/GyverRelay/src/GyverRelay.h"
)

target_include_directories(gyverrelay INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/GyverRelay/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(gyverrelay INTERFACE
    arduino-compat
)
