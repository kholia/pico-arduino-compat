add_library(pac-esp_abus INTERFACE)

target_sources(pac-esp_abus INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/esp_abus/src/abus_socket.h"
  "${CMAKE_CURRENT_LIST_DIR}/esp_abus/src/abus_helper.h"
)

target_include_directories(pac-esp_abus INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/esp_abus/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-esp_abus INTERFACE
    arduino-compat
)
