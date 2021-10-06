add_library(rs485_asukiaaa INTERFACE)

target_sources(rs485_asukiaaa INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/arduino-rs485/src/rs485_asukiaaa.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-rs485/src/rs485_asukiaaa.h"
)

target_include_directories(rs485_asukiaaa INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/arduino-rs485/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(rs485_asukiaaa INTERFACE
    arduino-compat
)
