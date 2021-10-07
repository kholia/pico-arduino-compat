add_library(pac-adc_sampler INTERFACE)

target_sources(pac-adc_sampler INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ADC_Sampler/src/ADC_Sampler.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ADC_Sampler/src/includes/ADC_buffer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ADC_Sampler/src/ADC_Sampler.h"
  "${CMAKE_CURRENT_LIST_DIR}/ADC_Sampler/src/includes/ADC_buffer.h"
)

target_include_directories(pac-adc_sampler INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ADC_Sampler/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-adc_sampler INTERFACE
    arduino-compat
)
