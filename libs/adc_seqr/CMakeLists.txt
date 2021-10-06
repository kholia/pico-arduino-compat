add_library(adc_seqr INTERFACE)

target_sources(adc_seqr INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ADC_SEQR/src/ADC_SEQR.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ADC_SEQR/src/ADC_SEQR.h"
)

target_include_directories(adc_seqr INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ADC_SEQR/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(adc_seqr INTERFACE
    arduino-compat
)
