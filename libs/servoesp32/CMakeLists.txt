add_library(servoesp32 INTERFACE)

target_sources(servoesp32 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ServoESP32/src/Servo.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ServoESP32/src/Servo.h"
)

target_include_directories(servoesp32 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ServoESP32/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(servoesp32 INTERFACE
    arduino-compat
)
