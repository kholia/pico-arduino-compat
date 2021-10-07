add_library(pac-hcsr04-ultrasonic-sensor INTERFACE)

target_sources(pac-hcsr04-ultrasonic-sensor INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-lib-HCSR04/src/HCSR04.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-lib-HCSR04/src/HCSR04.h"
)

target_include_directories(pac-hcsr04-ultrasonic-sensor INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Arduino-lib-HCSR04/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-hcsr04-ultrasonic-sensor INTERFACE
    arduino-compat
)
