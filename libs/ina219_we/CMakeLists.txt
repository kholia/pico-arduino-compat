add_library(pac-ina219_we INTERFACE)

target_sources(pac-ina219_we INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/INA219_WE/src/INA219_WE.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/INA219_WE/src/INA219_WE.h"
)

target_include_directories(pac-ina219_we INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/INA219_WE/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-ina219_we INTERFACE
    arduino-compat
)
