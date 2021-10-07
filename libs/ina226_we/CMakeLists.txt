add_library(pac-ina226_we INTERFACE)

target_sources(pac-ina226_we INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/INA226_WE/src/INA226_WE.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/INA226_WE/src/INA226_WE.h"
)

target_include_directories(pac-ina226_we INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/INA226_WE/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-ina226_we INTERFACE
    arduino-compat
)
