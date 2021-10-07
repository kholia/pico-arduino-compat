add_library(pac-ultrasonic_hc_sr04 INTERFACE)

target_sources(pac-ultrasonic_hc_sr04 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/HC-SR04/src/Ultrasonic.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/HC-SR04/src/Ultrasonic.h"
)

target_include_directories(pac-ultrasonic_hc_sr04 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/HC-SR04/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-ultrasonic_hc_sr04 INTERFACE
    arduino-compat
)
