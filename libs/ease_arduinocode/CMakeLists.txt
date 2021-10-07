add_library(pac-ease_arduinocode INTERFACE)

target_sources(pac-ease_arduinocode INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ease_arduinocode/Esmacatshield.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ease_arduinocode/Esmacatshield.h"
)

target_include_directories(pac-ease_arduinocode INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ease_arduinocode"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-ease_arduinocode INTERFACE
    arduino-compat
)
