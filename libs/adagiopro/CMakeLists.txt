add_library(pac-adagiopro INTERFACE)

target_sources(pac-adagiopro INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Arduino.AdagioPro/src/AdagioPro.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino.AdagioPro/src/AdagioPro.h"
)

target_include_directories(pac-adagiopro INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Arduino.AdagioPro/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-adagiopro INTERFACE
    arduino-compat
)
