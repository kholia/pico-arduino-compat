add_library(pac-ina226lib INTERFACE)

target_sources(pac-ina226lib INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/INA226Lib/src/INA226.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/INA226Lib/src/INA226.h"
)

target_include_directories(pac-ina226lib INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/INA226Lib/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-ina226lib INTERFACE
    arduino-compat
)
