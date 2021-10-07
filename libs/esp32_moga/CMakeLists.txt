add_library(pac-esp32_moga INTERFACE)

target_sources(pac-esp32_moga INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/esp32_moga/src/esp32_moga.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/esp32_moga/src/esp32_moga.h"
)

target_include_directories(pac-esp32_moga INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/esp32_moga/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-esp32_moga INTERFACE
    arduino-compat
)
