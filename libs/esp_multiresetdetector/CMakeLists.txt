add_library(pac-esp_multiresetdetector INTERFACE)

target_sources(pac-esp_multiresetdetector INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ESP_MultiResetDetector/src/ESP_MultiResetDetector.h"
)

target_include_directories(pac-esp_multiresetdetector INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ESP_MultiResetDetector/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-esp_multiresetdetector INTERFACE
    arduino-compat
)
