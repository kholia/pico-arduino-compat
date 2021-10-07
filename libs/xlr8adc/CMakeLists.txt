add_library(pac-xlr8adc INTERFACE)

target_sources(pac-xlr8adc INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/XLR8ADC/src/XLR8ADC.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/XLR8ADC/src/XLR8ADC.h"
)

target_include_directories(pac-xlr8adc INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/XLR8ADC/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-xlr8adc INTERFACE
    arduino-compat
)
