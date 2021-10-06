add_library(scd30_modbus INTERFACE)

target_sources(scd30_modbus INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SCD30-Modbus/src/scd30_modbus.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SCD30-Modbus/src/scd30_modbus.h"
)

target_include_directories(scd30_modbus INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SCD30-Modbus/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(scd30_modbus INTERFACE
    arduino-compat
)
