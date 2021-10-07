add_library(pac-gyverhx711 INTERFACE)

target_sources(pac-gyverhx711 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/GyverHX711/src/GyverHX711.h"
)

target_include_directories(pac-gyverhx711 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/GyverHX711/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-gyverhx711 INTERFACE
    arduino-compat
)
