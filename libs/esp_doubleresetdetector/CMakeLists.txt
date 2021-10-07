add_library(pac-esp_doubleresetdetector INTERFACE)

target_sources(pac-esp_doubleresetdetector INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ESP_DoubleResetDetector/src/ESP_DoubleResetDetector.h"
)

target_include_directories(pac-esp_doubleresetdetector INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ESP_DoubleResetDetector/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-esp_doubleresetdetector INTERFACE
    arduino-compat
)
