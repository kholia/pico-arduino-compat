add_library(rhio-pinmap INTERFACE)

target_sources(rhio-pinmap INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/rhio-pinmap/examples/SerialPorts.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/rhio-pinmap/examples/blink.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/rhio-pinmap/rhio-pinmap.h"
)

target_include_directories(rhio-pinmap INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/rhio-pinmap"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(rhio-pinmap INTERFACE
    arduino-compat
)
