add_library(esp_sds011 INTERFACE)

target_sources(esp_sds011 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/esp_sds011/src/Sds011.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/esp_sds011/src/Sds011.h"
)

target_include_directories(esp_sds011 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/esp_sds011/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(esp_sds011 INTERFACE
    arduino-compat
)
