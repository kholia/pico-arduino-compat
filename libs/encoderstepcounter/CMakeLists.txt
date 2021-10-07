add_library(pac-encoderstepcounter INTERFACE)

target_sources(pac-encoderstepcounter INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/EncoderStepCounter/EncoderStepCounter.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EncoderStepCounter/EncoderStepCounter.h"
)

target_include_directories(pac-encoderstepcounter INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/EncoderStepCounter"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-encoderstepcounter INTERFACE
    arduino-compat
)
