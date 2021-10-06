add_library(shift-register-led-matrix-lib INTERFACE)

target_sources(shift-register-led-matrix-lib INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ShiftRegisterLEDMatrixLib/src/RGBAnimation.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ShiftRegisterLEDMatrixLib/src/SPIConnection.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ShiftRegisterLEDMatrixLib/src/RGBColor.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ShiftRegisterLEDMatrixLib/src/RGBLEDMatrix.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ShiftRegisterLEDMatrixLib/src/BaseLEDMatrix.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ShiftRegisterLEDMatrixLib/src/SRLEDMatrixUtils.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ShiftRegisterLEDMatrixLib/src/LEDMatrixBits.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ShiftRegisterLEDMatrixLib/src/RGBAnimationSequence.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ShiftRegisterLEDMatrixLib/src/LEDMatrix.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ShiftRegisterLEDMatrixLib/src/SPIConnection.h"
  "${CMAKE_CURRENT_LIST_DIR}/ShiftRegisterLEDMatrixLib/src/TimerAction.h"
  "${CMAKE_CURRENT_LIST_DIR}/ShiftRegisterLEDMatrixLib/src/SRLEDMatrixUtils.h"
  "${CMAKE_CURRENT_LIST_DIR}/ShiftRegisterLEDMatrixLib/src/BaseLEDMatrix.h"
  "${CMAKE_CURRENT_LIST_DIR}/ShiftRegisterLEDMatrixLib/src/RGBColor.h"
  "${CMAKE_CURRENT_LIST_DIR}/ShiftRegisterLEDMatrixLib/src/LEDMatrixBits.h"
  "${CMAKE_CURRENT_LIST_DIR}/ShiftRegisterLEDMatrixLib/src/RGBAnimationSequence.h"
  "${CMAKE_CURRENT_LIST_DIR}/ShiftRegisterLEDMatrixLib/src/LEDMatrix.h"
  "${CMAKE_CURRENT_LIST_DIR}/ShiftRegisterLEDMatrixLib/src/RGBAnimation.h"
  "${CMAKE_CURRENT_LIST_DIR}/ShiftRegisterLEDMatrixLib/src/RGBLEDMatrix.h"
)

target_include_directories(shift-register-led-matrix-lib INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ShiftRegisterLEDMatrixLib/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET adafruit-gfx-library)
    add_subdirectory(../../libs/adafruit-gfx-library build_adafruit-gfx-library)
endif()

target_link_libraries(shift-register-led-matrix-lib INTERFACE
    arduino-compat
    adafruit-gfx-library
)
