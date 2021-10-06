add_library(pxmatrix-led-matrix-library INTERFACE)

target_sources(pxmatrix-led-matrix-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/PxMatrix/PxMatrix.h"
  "${CMAKE_CURRENT_LIST_DIR}/PxMatrix/examples/Aurora_Demo/Playlist.h"
  "${CMAKE_CURRENT_LIST_DIR}/PxMatrix/examples/Aurora_Demo/PatternPendulumWave.h"
  "${CMAKE_CURRENT_LIST_DIR}/PxMatrix/examples/Aurora_Demo/PatternCube.h"
  "${CMAKE_CURRENT_LIST_DIR}/PxMatrix/examples/Aurora_Demo/PatternSpark.h"
  "${CMAKE_CURRENT_LIST_DIR}/PxMatrix/examples/Aurora_Demo/PatternFire.h"
  "${CMAKE_CURRENT_LIST_DIR}/PxMatrix/examples/Aurora_Demo/PatternSimplexNoise.h"
  "${CMAKE_CURRENT_LIST_DIR}/PxMatrix/examples/Aurora_Demo/PatternBounce.h"
  "${CMAKE_CURRENT_LIST_DIR}/PxMatrix/examples/Aurora_Demo/Patterns.h"
  "${CMAKE_CURRENT_LIST_DIR}/PxMatrix/examples/Aurora_Demo/PatternNoiseSmearing.h"
  "${CMAKE_CURRENT_LIST_DIR}/PxMatrix/examples/Aurora_Demo/Attractor.h"
  "${CMAKE_CURRENT_LIST_DIR}/PxMatrix/examples/Aurora_Demo/Boid.h"
  "${CMAKE_CURRENT_LIST_DIR}/PxMatrix/examples/Aurora_Demo/PatternSwirl.h"
  "${CMAKE_CURRENT_LIST_DIR}/PxMatrix/examples/Aurora_Demo/PatternSnake.h"
  "${CMAKE_CURRENT_LIST_DIR}/PxMatrix/examples/Aurora_Demo/PatternRadar.h"
  "${CMAKE_CURRENT_LIST_DIR}/PxMatrix/examples/Aurora_Demo/PatternTest.h"
  "${CMAKE_CURRENT_LIST_DIR}/PxMatrix/examples/Aurora_Demo/PatternWave.h"
  "${CMAKE_CURRENT_LIST_DIR}/PxMatrix/examples/Aurora_Demo/PatternPlasma.h"
  "${CMAKE_CURRENT_LIST_DIR}/PxMatrix/examples/Aurora_Demo/Geometry.h"
  "${CMAKE_CURRENT_LIST_DIR}/PxMatrix/examples/Aurora_Demo/Vector.h"
  "${CMAKE_CURRENT_LIST_DIR}/PxMatrix/examples/Aurora_Demo/PatternIncrementalDrift.h"
  "${CMAKE_CURRENT_LIST_DIR}/PxMatrix/examples/Aurora_Demo/PatternFlock.h"
  "${CMAKE_CURRENT_LIST_DIR}/PxMatrix/examples/Aurora_Demo/PatternInfinity.h"
  "${CMAKE_CURRENT_LIST_DIR}/PxMatrix/examples/Aurora_Demo/PatternElectricMandala.h"
  "${CMAKE_CURRENT_LIST_DIR}/PxMatrix/examples/Aurora_Demo/PatternSpiral.h"
  "${CMAKE_CURRENT_LIST_DIR}/PxMatrix/examples/Aurora_Demo/PatternFlowField.h"
  "${CMAKE_CURRENT_LIST_DIR}/PxMatrix/examples/Aurora_Demo/PatternMaze.h"
  "${CMAKE_CURRENT_LIST_DIR}/PxMatrix/examples/Aurora_Demo/Drawable.h"
  "${CMAKE_CURRENT_LIST_DIR}/PxMatrix/examples/Aurora_Demo/PatternMunch.h"
  "${CMAKE_CURRENT_LIST_DIR}/PxMatrix/examples/Aurora_Demo/PatternAttract.h"
  "${CMAKE_CURRENT_LIST_DIR}/PxMatrix/examples/Aurora_Demo/Effects.h"
  "${CMAKE_CURRENT_LIST_DIR}/PxMatrix/examples/Aurora_Demo/PatternSpin.h"
  "${CMAKE_CURRENT_LIST_DIR}/PxMatrix/examples/Aurora_Demo/PatternLife.h"
  "${CMAKE_CURRENT_LIST_DIR}/PxMatrix/examples/Aurora_Demo/PatternInvaders.h"
  "${CMAKE_CURRENT_LIST_DIR}/PxMatrix/examples/Aurora_Demo/PatternPulse.h"
  "${CMAKE_CURRENT_LIST_DIR}/PxMatrix/examples/Aurora_Demo/PatternIncrementalDrift2.h"
  "${CMAKE_CURRENT_LIST_DIR}/PxMatrix/examples/Aurora_Demo/PatternSpiro.h"
  "${CMAKE_CURRENT_LIST_DIR}/PxMatrix/examples/black_lives/anim_data.h"
)

target_include_directories(pxmatrix-led-matrix-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/PxMatrix"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET adafruit-gfx-library)
    add_subdirectory(../../libs/adafruit-gfx-library build_adafruit-gfx-library)
endif()

target_link_libraries(pxmatrix-led-matrix-library INTERFACE
    arduino-compat
    adafruit-gfx-library
)
