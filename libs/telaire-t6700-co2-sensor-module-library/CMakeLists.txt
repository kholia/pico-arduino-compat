add_library(pac-telaire-t6700-co2-sensor-module-library INTERFACE)

target_sources(pac-telaire-t6700-co2-sensor-module-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/T67XX/src/T67XX.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/T67XX/src/T67XX.h"
)

target_include_directories(pac-telaire-t6700-co2-sensor-module-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/T67XX/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-telaire-t6700-co2-sensor-module-library INTERFACE
    arduino-compat
)
