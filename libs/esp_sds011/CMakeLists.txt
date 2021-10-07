add_library(pac-esp_sds011 INTERFACE)

target_sources(pac-esp_sds011 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/esp_sds011/src/Sds011.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/esp_sds011/src/Sds011.h"
)

target_include_directories(pac-esp_sds011 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/esp_sds011/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-esp_sds011 INTERFACE
    arduino-compat
)
