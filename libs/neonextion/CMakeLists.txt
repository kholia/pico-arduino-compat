add_library(pac-neonextion INTERFACE)

target_sources(pac-neonextion INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/NeoNextion/NextionPage.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/NeoNextion/INextionFontStyleable.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/NeoNextion/NextionSlidingText.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/NeoNextion/NextionPicture.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/NeoNextion/NextionTimer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/NeoNextion/INextionColourable.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/NeoNextion/INextionTouchable.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/NeoNextion/NextionCrop.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/NeoNextion/NextionWaveform.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/NeoNextion/INextionWidget.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/NeoNextion/Nextion.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/NeoNextion/NextionText.h"
  "${CMAKE_CURRENT_LIST_DIR}/NeoNextion/NextionHotspot.h"
  "${CMAKE_CURRENT_LIST_DIR}/NeoNextion/INextionFontStyleable.h"
  "${CMAKE_CURRENT_LIST_DIR}/NeoNextion/NextionTypes.h"
  "${CMAKE_CURRENT_LIST_DIR}/NeoNextion/NextionNumber.h"
  "${CMAKE_CURRENT_LIST_DIR}/NeoNextion/NextionCrop.h"
  "${CMAKE_CURRENT_LIST_DIR}/NeoNextion/NextionGauge.h"
  "${CMAKE_CURRENT_LIST_DIR}/NeoNextion/NextionDualStateButton.h"
  "${CMAKE_CURRENT_LIST_DIR}/NeoNextion/INextionStringValued.h"
  "${CMAKE_CURRENT_LIST_DIR}/NeoNextion/NextionVariableNumeric.h"
  "${CMAKE_CURRENT_LIST_DIR}/NeoNextion/INextionWidget.h"
  "${CMAKE_CURRENT_LIST_DIR}/NeoNextion/NextionWaveform.h"
  "${CMAKE_CURRENT_LIST_DIR}/NeoNextion/NextionButton.h"
  "${CMAKE_CURRENT_LIST_DIR}/NeoNextion/INextionBooleanValued.h"
  "${CMAKE_CURRENT_LIST_DIR}/NeoNextion/NextionProgressBar.h"
  "${CMAKE_CURRENT_LIST_DIR}/NeoNextion/NextionPicture.h"
  "${CMAKE_CURRENT_LIST_DIR}/NeoNextion/NextionRadioButton.h"
  "${CMAKE_CURRENT_LIST_DIR}/NeoNextion/NextionSlider.h"
  "${CMAKE_CURRENT_LIST_DIR}/NeoNextion/INextionCallback.h"
  "${CMAKE_CURRENT_LIST_DIR}/NeoNextion/NextionVariableString.h"
  "${CMAKE_CURRENT_LIST_DIR}/NeoNextion/NextionSlidingText.h"
  "${CMAKE_CURRENT_LIST_DIR}/NeoNextion/NextionPage.h"
  "${CMAKE_CURRENT_LIST_DIR}/NeoNextion/INextionTouchable.h"
  "${CMAKE_CURRENT_LIST_DIR}/NeoNextion/INextionColourable.h"
  "${CMAKE_CURRENT_LIST_DIR}/NeoNextion/INextionNumericalValued.h"
  "${CMAKE_CURRENT_LIST_DIR}/NeoNextion/Nextion.h"
  "${CMAKE_CURRENT_LIST_DIR}/NeoNextion/NextionCheckbox.h"
  "${CMAKE_CURRENT_LIST_DIR}/NeoNextion/NextionCallbackFunctionHandler.h"
  "${CMAKE_CURRENT_LIST_DIR}/NeoNextion/NextionTimer.h"
)

target_include_directories(pac-neonextion INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/NeoNextion"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-neonextion INTERFACE
    arduino-compat
)
