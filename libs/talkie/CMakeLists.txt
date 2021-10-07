add_library(pac-talkie INTERFACE)

target_sources(pac-talkie INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Talkie/src/TalkieUlils.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Talkie/src/Vocab_Soundbites.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Talkie/src/Vocab_AstroBlaster.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Talkie/src/Vocab_Toms_Diner.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Talkie/src/Talkie.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Talkie/src/Vocab_US_Large.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Talkie/src/Vocab_US_Clock.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Talkie/src/Vocab_US_Acorn.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Talkie/src/Vocab_US_TI99.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Talkie/src/Vocab_Special.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Talkie/examples/VoltmeterSayQ/ADCUtils.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Talkie/examples/USDistanceToVoice/HCSR04.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Talkie/src/TalkieUtils.h"
  "${CMAKE_CURRENT_LIST_DIR}/Talkie/src/TalkieLPC.h"
  "${CMAKE_CURRENT_LIST_DIR}/Talkie/src/Vocab_US_Large.h"
  "${CMAKE_CURRENT_LIST_DIR}/Talkie/src/Talkie.h"
  "${CMAKE_CURRENT_LIST_DIR}/Talkie/src/Vocab_US_TI99.h"
  "${CMAKE_CURRENT_LIST_DIR}/Talkie/src/Vocab_US_Clock.h"
  "${CMAKE_CURRENT_LIST_DIR}/Talkie/src/Vocab_Toms_Diner.h"
  "${CMAKE_CURRENT_LIST_DIR}/Talkie/src/Vocab_US_Acorn.h"
  "${CMAKE_CURRENT_LIST_DIR}/Talkie/src/digitalWriteFast.h"
  "${CMAKE_CURRENT_LIST_DIR}/Talkie/src/Vocab_Special.h"
  "${CMAKE_CURRENT_LIST_DIR}/Talkie/src/Vocab_Soundbites.h"
  "${CMAKE_CURRENT_LIST_DIR}/Talkie/examples/VoltmeterSayQ/ADCUtils.h"
  "${CMAKE_CURRENT_LIST_DIR}/Talkie/examples/USDistanceToVoice/HCSR04.h"
)

target_include_directories(pac-talkie INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Talkie/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-talkie INTERFACE
    arduino-compat
)
