add_library(pac-texie-arduino-client INTERFACE)

target_sources(pac-texie-arduino-client INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TeXie_arduino/src/TeXie_arduino.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TeXie_arduino/src/TeXie_arduino.h"
)

target_include_directories(pac-texie-arduino-client INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TeXie_arduino/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-texie-arduino-client INTERFACE
    arduino-compat
)
