add_library(pac-serialterminalpro INTERFACE)

target_sources(pac-serialterminalpro INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SerialTerminal/SerialTerminal.hpp"
)

target_include_directories(pac-serialterminalpro INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SerialTerminal"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-serialterminalpro INTERFACE
    arduino-compat
)
