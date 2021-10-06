add_library(ease_arduinocode INTERFACE)

target_sources(ease_arduinocode INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ease_arduinocode/Esmacatshield.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ease_arduinocode/Esmacatshield.h"
)

target_include_directories(ease_arduinocode INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ease_arduinocode"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(ease_arduinocode INTERFACE
    arduino-compat
)
