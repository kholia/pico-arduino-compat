add_library(pac-tinylora INTERFACE)

target_sources(pac-tinylora INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TinyLoRa/TinyLoRa.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TinyLoRa/TinyLoRa.h"
)

target_include_directories(pac-tinylora INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TinyLoRa"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-tinylora INTERFACE
    arduino-compat
)
