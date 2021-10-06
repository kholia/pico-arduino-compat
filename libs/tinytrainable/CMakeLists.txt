add_library(tinytrainable INTERFACE)

target_sources(tinytrainable INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TinyTrainable/src/TinyTrainable.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TinyTrainable/src/tensorflow_speech/recognize_commands.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TinyTrainable/src/tensorflow_speech/arduino_audio_provider.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TinyTrainable/src/tensorflow_speech/feature_provider.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TinyTrainable/src/tensorflow_speech/micro_features_model.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TinyTrainable/src/tensorflow_speech/arduino_command_responder.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TinyTrainable/src/tensorflow_speech/micro_features_micro_features_generator.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TinyTrainable/src/tensorflow_speech/micro_features_micro_model_settings.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TinyTrainable/src/tensorflow_speech/arduino_main.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TinyTrainable/src/outputs/OutputLED.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TinyTrainable/src/outputs/OutputBuzzer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TinyTrainable/src/outputs/OutputPrinter.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TinyTrainable/src/outputs/OutputSerial.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TinyTrainable/src/outputs/OutputMIDI.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TinyTrainable/src/outputs/OutputScreen.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TinyTrainable/src/outputs/OutputServo.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TinyTrainable/src/inputs/InputColor.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TinyTrainable/src/inputs/InputGesture.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TinyTrainable/src/inputs/InputSpeech.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TinyTrainable/assets/modelSpeechDefault.h"
  "${CMAKE_CURRENT_LIST_DIR}/TinyTrainable/assets/modelGestureDefault.h"
  "${CMAKE_CURRENT_LIST_DIR}/TinyTrainable/src/TinyTrainable.h"
  "${CMAKE_CURRENT_LIST_DIR}/TinyTrainable/src/tensorflow_speech/main_functions.h"
  "${CMAKE_CURRENT_LIST_DIR}/TinyTrainable/src/tensorflow_speech/recognize_commands.h"
  "${CMAKE_CURRENT_LIST_DIR}/TinyTrainable/src/tensorflow_speech/micro_features_model.h"
  "${CMAKE_CURRENT_LIST_DIR}/TinyTrainable/src/tensorflow_speech/command_responder.h"
  "${CMAKE_CURRENT_LIST_DIR}/TinyTrainable/src/tensorflow_speech/micro_features_micro_model_settings.h"
  "${CMAKE_CURRENT_LIST_DIR}/TinyTrainable/src/tensorflow_speech/audio_provider.h"
  "${CMAKE_CURRENT_LIST_DIR}/TinyTrainable/src/tensorflow_speech/feature_provider.h"
  "${CMAKE_CURRENT_LIST_DIR}/TinyTrainable/src/tensorflow_speech/micro_features_micro_features_generator.h"
  "${CMAKE_CURRENT_LIST_DIR}/TinyTrainable/src/outputs/MIDIPatterns.h"
  "${CMAKE_CURRENT_LIST_DIR}/TinyTrainable/src/outputs/OutputBuzzer.h"
  "${CMAKE_CURRENT_LIST_DIR}/TinyTrainable/src/outputs/OutputServo.h"
  "${CMAKE_CURRENT_LIST_DIR}/TinyTrainable/src/outputs/OutputMIDI.h"
  "${CMAKE_CURRENT_LIST_DIR}/TinyTrainable/src/outputs/OutputSerial.h"
  "${CMAKE_CURRENT_LIST_DIR}/TinyTrainable/src/outputs/Output.h"
  "${CMAKE_CURRENT_LIST_DIR}/TinyTrainable/src/outputs/OutputPrinter.h"
  "${CMAKE_CURRENT_LIST_DIR}/TinyTrainable/src/outputs/OutputScreen.h"
  "${CMAKE_CURRENT_LIST_DIR}/TinyTrainable/src/outputs/OutputLED.h"
  "${CMAKE_CURRENT_LIST_DIR}/TinyTrainable/src/inputs/Input.h"
  "${CMAKE_CURRENT_LIST_DIR}/TinyTrainable/src/inputs/InputSpeech.h"
  "${CMAKE_CURRENT_LIST_DIR}/TinyTrainable/src/inputs/InputColor.h"
  "${CMAKE_CURRENT_LIST_DIR}/TinyTrainable/src/inputs/InputGesture.h"
  "${CMAKE_CURRENT_LIST_DIR}/TinyTrainable/examples/speech/speech_serial/mySpeechModel.h"
  "${CMAKE_CURRENT_LIST_DIR}/TinyTrainable/examples/gesture/gesture_printer/myGestureModel.h"
  "${CMAKE_CURRENT_LIST_DIR}/TinyTrainable/examples/gesture/gesture_servo/myGestureModel.h"
  "${CMAKE_CURRENT_LIST_DIR}/TinyTrainable/examples/gesture/gesture_midi/myGestureModel.h"
  "${CMAKE_CURRENT_LIST_DIR}/TinyTrainable/examples/gesture/gesture_serial/myGestureModel.h"
  "${CMAKE_CURRENT_LIST_DIR}/TinyTrainable/examples/gesture/gesture_buzzer/myGestureModel.h"
  "${CMAKE_CURRENT_LIST_DIR}/TinyTrainable/examples/gesture/gesture_screen/myGestureModel.h"
  "${CMAKE_CURRENT_LIST_DIR}/TinyTrainable/examples/gesture/gesture_led/myGestureModel.h"
)

target_include_directories(tinytrainable INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TinyTrainable/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET adafruit-gfx-library)
    add_subdirectory(../../libs/adafruit-gfx-library build_adafruit-gfx-library)
endif()

target_link_libraries(tinytrainable INTERFACE
    arduino-compat
    adafruit-gfx-library
)
