add_library(adc_sampler INTERFACE)

target_sources(adc_sampler INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ADC_Sampler/src/ADC_Sampler.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ADC_Sampler/src/includes/ADC_buffer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ADC_Sampler/src/ADC_Sampler.h"
  "${CMAKE_CURRENT_LIST_DIR}/ADC_Sampler/src/includes/ADC_buffer.h"
)

target_include_directories(adc_sampler INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ADC_Sampler/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(adc_sampler INTERFACE
    arduino-compat
)
