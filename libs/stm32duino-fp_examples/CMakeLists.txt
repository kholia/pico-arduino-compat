add_library(pac-stm32duino-fp_examples INTERFACE)

target_sources(pac-stm32duino-fp_examples INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/FP_Examples/examples/X_NUCLEO_IKS02A1_Audio_Button/WaveEncoder.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FP_Examples/src/FP_Examples.h"
  "${CMAKE_CURRENT_LIST_DIR}/FP_Examples/examples/X_NUCLEO_IKS02A1_Audio_Button/WaveEncoder.h"
  "${CMAKE_CURRENT_LIST_DIR}/FP_Examples/examples/X_NUCLEO_IKS02A1_Audio_Button/app_config.h"
)

target_include_directories(pac-stm32duino-fp_examples INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/FP_Examples/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-stm32duino-fp_examples INTERFACE
    arduino-compat
)
