add_library(ultrasonic_hc_sr04 INTERFACE)

target_sources(ultrasonic_hc_sr04 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/HC-SR04/src/Ultrasonic.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/HC-SR04/src/Ultrasonic.h"
)

target_include_directories(ultrasonic_hc_sr04 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/HC-SR04/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(ultrasonic_hc_sr04 INTERFACE
    arduino-compat
)
