add_library(ina226_asukiaaa INTERFACE)

target_sources(ina226_asukiaaa INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/INA226_asukiaaa/src/INA226_asukiaaa.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/INA226_asukiaaa/src/INA226_asukiaaa.h"
)

target_include_directories(ina226_asukiaaa INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/INA226_asukiaaa/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(ina226_asukiaaa INTERFACE
    arduino-compat
)
