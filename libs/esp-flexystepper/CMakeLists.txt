add_library(esp-flexystepper INTERFACE)

target_sources(esp-flexystepper INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ESP-FlexyStepper/src/ESP_FlexyStepper.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP-FlexyStepper/src/ESP_FlexyStepper.h"
)

target_include_directories(esp-flexystepper INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ESP-FlexyStepper/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(esp-flexystepper INTERFACE
    arduino-compat
)
