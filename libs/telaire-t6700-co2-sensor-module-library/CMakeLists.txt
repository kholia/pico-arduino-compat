add_library(telaire-t6700-co2-sensor-module-library INTERFACE)

target_sources(telaire-t6700-co2-sensor-module-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/T67XX/src/T67XX.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/T67XX/src/T67XX.h"
)

target_include_directories(telaire-t6700-co2-sensor-module-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/T67XX/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(telaire-t6700-co2-sensor-module-library INTERFACE
    arduino-compat
)
