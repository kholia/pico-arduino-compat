add_library(esp_multiresetdetector INTERFACE)

target_sources(esp_multiresetdetector INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ESP_MultiResetDetector/src/ESP_MultiResetDetector.h"
)

target_include_directories(esp_multiresetdetector INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ESP_MultiResetDetector/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(esp_multiresetdetector INTERFACE
    arduino-compat
)
