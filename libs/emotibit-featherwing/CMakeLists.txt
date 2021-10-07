add_library(pac-emotibit-featherwing INTERFACE)

target_sources(pac-emotibit-featherwing INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/EmotiBit_FW_FeatherWing/EmotiBit.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EmotiBit_FW_FeatherWing/EmotiBitWiFi.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EmotiBit_FW_FeatherWing/AdcCorrection.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EmotiBit_FW_FeatherWing/DoubleBufferFloat.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EmotiBit_FW_FeatherWing/EmotiBitVersionController.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EmotiBit_FW_FeatherWing/EdaCorrection.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EmotiBit_FW_FeatherWing/EmojiBit.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EmotiBit_FW_FeatherWing/BufferFloat.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EmotiBit_FW_FeatherWing/EmotiBitEda.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EmotiBit_FW_FeatherWing/EdaCorrection.h"
  "${CMAKE_CURRENT_LIST_DIR}/EmotiBit_FW_FeatherWing/EmotiBitWiFi.h"
  "${CMAKE_CURRENT_LIST_DIR}/EmotiBit_FW_FeatherWing/EmojiTemplates.h"
  "${CMAKE_CURRENT_LIST_DIR}/EmotiBit_FW_FeatherWing/EmojiBit.h"
  "${CMAKE_CURRENT_LIST_DIR}/EmotiBit_FW_FeatherWing/BufferFloat.h"
  "${CMAKE_CURRENT_LIST_DIR}/EmotiBit_FW_FeatherWing/DoubleBufferFloat.h"
  "${CMAKE_CURRENT_LIST_DIR}/EmotiBit_FW_FeatherWing/EmotiBitEda.h"
  "${CMAKE_CURRENT_LIST_DIR}/EmotiBit_FW_FeatherWing/EmotiBitVersionController.h"
  "${CMAKE_CURRENT_LIST_DIR}/EmotiBit_FW_FeatherWing/EmotiBit.h"
  "${CMAKE_CURRENT_LIST_DIR}/EmotiBit_FW_FeatherWing/AdcCorrection.h"
)

target_include_directories(pac-emotibit-featherwing INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/EmotiBit_FW_FeatherWing"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET pac-adafruit-gfx-library)
    add_subdirectory(../../libs/adafruit-gfx-library build_pac-adafruit-gfx-library)
endif()

target_link_libraries(pac-emotibit-featherwing INTERFACE
    arduino-compat
    pac-adafruit-gfx-library
)
