add_library(pac-ina226 INTERFACE)

target_sources(pac-ina226 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/INA226/INA226.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/INA226/test/unit_test_001.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/INA226/INA226.h"
)

target_include_directories(pac-ina226 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/INA226"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-ina226 INTERFACE
    arduino-compat
)
