add_library(pac-nanoconnecthcsr04 INTERFACE)

target_sources(pac-nanoconnecthcsr04 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/NanoConnectHcSr04/src/NanoConnectHcSr04.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/NanoConnectHcSr04/src/NanoConnectHcSr04.h"
  "${CMAKE_CURRENT_LIST_DIR}/NanoConnectHcSr04/src/NanoConnectHcSr04.pio.h"
)

target_include_directories(pac-nanoconnecthcsr04 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/NanoConnectHcSr04/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-nanoconnecthcsr04 INTERFACE
    arduino-compat
)
