add_library(pac-servoesp32 INTERFACE)

target_sources(pac-servoesp32 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ServoESP32/src/Servo.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ServoESP32/src/Servo.h"
)

target_include_directories(pac-servoesp32 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ServoESP32/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-servoesp32 INTERFACE
    arduino-compat
)
