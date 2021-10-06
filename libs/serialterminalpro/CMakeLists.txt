add_library(serialterminalpro INTERFACE)

target_sources(serialterminalpro INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SerialTerminal/SerialTerminal.hpp"
)

target_include_directories(serialterminalpro INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SerialTerminal"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(serialterminalpro INTERFACE
    arduino-compat
)
