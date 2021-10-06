add_library(esp_doubleresetdetector INTERFACE)

target_sources(esp_doubleresetdetector INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ESP_DoubleResetDetector/src/ESP_DoubleResetDetector.h"
)

target_include_directories(esp_doubleresetdetector INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ESP_DoubleResetDetector/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(esp_doubleresetdetector INTERFACE
    arduino-compat
)
