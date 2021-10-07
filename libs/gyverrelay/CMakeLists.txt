add_library(pac-gyverrelay INTERFACE)

target_sources(pac-gyverrelay INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/GyverRelay/src/GyverRelay.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/GyverRelay/src/GyverRelay.h"
)

target_include_directories(pac-gyverrelay INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/GyverRelay/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-gyverrelay INTERFACE
    arduino-compat
)
