add_library(pac-withrottle INTERFACE)

target_sources(pac-withrottle INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/WiThrottle/src/WiThrottle.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/WiThrottle/src/WiThrottle.h"
)

target_include_directories(pac-withrottle INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/WiThrottle/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-withrottle INTERFACE
    arduino-compat
)
