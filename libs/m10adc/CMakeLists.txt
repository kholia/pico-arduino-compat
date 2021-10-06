add_library(m10adc INTERFACE)

target_sources(m10adc INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/M10ADC/src/M10ADC.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/M10ADC/src/M10ADC.h"
)

target_include_directories(m10adc INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/M10ADC/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(m10adc INTERFACE
    arduino-compat
)
