add_library(hc-sr04 INTERFACE)

target_sources(hc-sr04 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/HC-SR04/src/HCSR04.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/HC-SR04/src/HCSR04.h"
)

target_include_directories(hc-sr04 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/HC-SR04/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(hc-sr04 INTERFACE
    arduino-compat
)
