add_library(pac-adafruit-tensorflow-lite INTERFACE)

target_sources(pac-adafruit-tensorflow-lite INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_TFLite/Adafruit_TFLite.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_TFLite/examples/micro_speech_arcada/recognize_commands.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_TFLite/examples/micro_speech_arcada/arduino_audio_provider.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_TFLite/examples/micro_speech_arcada/feature_provider.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_TFLite/examples/micro_speech_arcada/arduino_command_responder.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_TFLite/examples/micro_speech_arcada/micro_features_micro_features_generator.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_TFLite/examples/micro_speech_arcada/micro_features_micro_model_settings.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_TFLite/examples/micro_speech_arcada/micro_features_yes_micro_features_data.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_TFLite/examples/micro_speech_arcada/micro_features_tiny_conv_micro_features_model_data.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_TFLite/examples/micro_speech_arcada/micro_features_no_micro_features_data.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_TFLite/examples/micro_speech_arcada/arduino_main.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_TFLite/examples/hello_world/sine_model_data.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_TFLite/examples/hello_world/arduino_output_handler.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_TFLite/examples/magic_wand_arcada/magic_wand_model_data.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_TFLite/examples/magic_wand_arcada/arduino_constants.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_TFLite/examples/magic_wand_arcada/arduino_accelerometer_handler.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_TFLite/examples/magic_wand_arcada/gesture_predictor.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_TFLite/examples/magic_wand_arcada/arduino_main.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_TFLite/examples/magic_wand_arcada/arduino_output_handler.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_TFLite/examples/magic_wand/magic_wand_model_data.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_TFLite/examples/magic_wand/arduino_constants.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_TFLite/examples/magic_wand/arduino_accelerometer_handler.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_TFLite/examples/magic_wand/gesture_predictor.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_TFLite/examples/magic_wand/arduino_main.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_TFLite/examples/magic_wand/arduino_output_handler.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_TFLite/examples/hello_world_arcada/sine_model_data.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_TFLite/examples/hello_world_arcada/arduino_output_handler.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_TFLite/Adafruit_TFLite.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_TFLite/examples/micro_speech_arcada/main_functions.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_TFLite/examples/micro_speech_arcada/recognize_commands.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_TFLite/examples/micro_speech_arcada/micro_features_tiny_conv_micro_features_model_data.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_TFLite/examples/micro_speech_arcada/micro_features_no_micro_features_data.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_TFLite/examples/micro_speech_arcada/command_responder.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_TFLite/examples/micro_speech_arcada/micro_features_micro_model_settings.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_TFLite/examples/micro_speech_arcada/audio_provider.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_TFLite/examples/micro_speech_arcada/feature_provider.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_TFLite/examples/micro_speech_arcada/micro_features_micro_features_generator.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_TFLite/examples/micro_speech_arcada/micro_features_yes_micro_features_data.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_TFLite/examples/hello_world/output_handler.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_TFLite/examples/hello_world/sine_model_data.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_TFLite/examples/magic_wand_arcada/main_functions.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_TFLite/examples/magic_wand_arcada/gesture_predictor.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_TFLite/examples/magic_wand_arcada/output_handler.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_TFLite/examples/magic_wand_arcada/constants.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_TFLite/examples/magic_wand_arcada/accelerometer_handler.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_TFLite/examples/magic_wand_arcada/magic_wand_model_data.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_TFLite/examples/magic_wand/main_functions.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_TFLite/examples/magic_wand/gesture_predictor.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_TFLite/examples/magic_wand/output_handler.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_TFLite/examples/magic_wand/constants.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_TFLite/examples/magic_wand/accelerometer_handler.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_TFLite/examples/magic_wand/magic_wand_model_data.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_TFLite/examples/hello_world_arcada/output_handler.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_TFLite/examples/hello_world_arcada/sine_model_data.h"
)

target_include_directories(pac-adafruit-tensorflow-lite INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_TFLite"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-adafruit-tensorflow-lite INTERFACE
    arduino-compat
)
