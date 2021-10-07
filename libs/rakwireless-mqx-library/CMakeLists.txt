add_library(pac-rakwireless-mqx-library INTERFACE)

target_sources(pac-rakwireless-mqx-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/RAK-MQx-Library/src/ADC121C021.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RAK-MQx-Library/src/ADC121C021.h"
)

target_include_directories(pac-rakwireless-mqx-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/RAK-MQx-Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-rakwireless-mqx-library INTERFACE
    arduino-compat
)
