add_library(adagiopro INTERFACE)

target_sources(adagiopro INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Arduino.AdagioPro/src/AdagioPro.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino.AdagioPro/src/AdagioPro.h"
)

target_include_directories(adagiopro INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Arduino.AdagioPro/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(adagiopro INTERFACE
    arduino-compat
)
