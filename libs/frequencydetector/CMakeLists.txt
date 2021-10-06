add_library(frequencydetector INTERFACE)

target_sources(frequencydetector INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-FrequencyDetector/src/MillisUtils.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-FrequencyDetector/src/FrequencyDetector.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-FrequencyDetector/examples/WhistleSwitch/ShowInfo.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-FrequencyDetector/examples/WhistleSwitch/AVRUtils.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-FrequencyDetector/examples/SimpleFrequencyDetector/AVRUtils.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-FrequencyDetector/src/MillisUtils.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-FrequencyDetector/src/DebugLevel.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-FrequencyDetector/src/FrequencyDetector.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-FrequencyDetector/examples/WhistleSwitch/AVRUtils.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-FrequencyDetector/examples/WhistleSwitch/EasyButtonAtInt01.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-FrequencyDetector/examples/WhistleSwitch/digitalWriteFast.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-FrequencyDetector/examples/WhistleSwitch/EasyButtonAtInt01.cpp.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-FrequencyDetector/examples/WhistleSwitch/ShowInfo.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-FrequencyDetector/examples/SimpleFrequencyDetector/AVRUtils.h"
)

target_include_directories(frequencydetector INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Arduino-FrequencyDetector/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(frequencydetector INTERFACE
    arduino-compat
)
