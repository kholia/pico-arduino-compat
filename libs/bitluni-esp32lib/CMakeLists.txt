add_library(bitluni-esp32lib INTERFACE)

target_sources(bitluni-esp32lib INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ESP32Lib/src/I2S/I2S.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32Lib/src/Composite/Composite.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32Lib/src/LED/SerialLED.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32Lib/src/LED/ParallelLED.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32Lib/src/LED/ParallelLEDGraphics.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32Lib/src/VGA/VGA.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32Lib/src/GfxWrapper.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32Lib/src/ESP32Lib.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32Lib/src/I2S/DMABufferDescriptor.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32Lib/src/I2S/I2S.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32Lib/src/Composite/CompositeL8.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32Lib/src/Composite/PinConfigComposite.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32Lib/src/Composite/Composite.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32Lib/src/Composite/ModeComposite.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32Lib/src/Composite/CompositePAL8.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32Lib/src/Graphics/Mesh.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32Lib/src/Graphics/GraphicsR1G1B1A1.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32Lib/src/Graphics/GraphicsR5G5B4A2.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32Lib/src/Graphics/Animation.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32Lib/src/Graphics/GraphicsPAL8Swapped.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32Lib/src/Graphics/GraphicsL8CompositeSwapped.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32Lib/src/Graphics/TriangleTree.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32Lib/src/Graphics/RGB2YUV.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32Lib/src/Graphics/GraphicsR2G2B2A2.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32Lib/src/Graphics/Engine3D.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32Lib/src/Graphics/GraphicsR2G2B2S2Swapped.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32Lib/src/Graphics/Entity.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32Lib/src/Graphics/GraphicsR5G5B4S2Swapped.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32Lib/src/Graphics/GraphicsR1G1B1A1X2S2Swapped.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32Lib/src/Graphics/GraphicsPALColor.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32Lib/src/Graphics/Image.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32Lib/src/Graphics/Font.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32Lib/src/Graphics/Sprites.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32Lib/src/Graphics/Graphics.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32Lib/src/Graphics/ImageDrawer.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32Lib/src/Math/Matrix.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32Lib/src/Controller/GameControllers.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32Lib/src/Audio/AudioSystem.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32Lib/src/Audio/AudioOutput.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32Lib/src/LED/ParallelLEDGraphics.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32Lib/src/LED/LUT.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32Lib/src/LED/ParallelLED.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32Lib/src/LED/SerialLED.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32Lib/src/VGA/VGA3Bit.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32Lib/src/VGA/PinConfig.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32Lib/src/VGA/VGA14BitI.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32Lib/src/VGA/VGA6BitI.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32Lib/src/VGA/VGA14Bit.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32Lib/src/VGA/VGA3BitI.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32Lib/src/VGA/VGA6Bit.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32Lib/src/VGA/VGA.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32Lib/src/VGA/Mode.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32Lib/src/Tools/Log.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32Lib/src/Ressources/CodePage437_8x8.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32Lib/src/Ressources/Font6x8.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32Lib/src/Ressources/CodePage437_9x16.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32Lib/src/Ressources/Font8x8.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32Lib/src/Ressources/CodePage437_8x19.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32Lib/src/Ressources/CodePage437_8x16.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32Lib/src/Ressources/CodePage437_8x14.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32Lib/examples/VGA3DEngine/thinker.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32Lib/examples/Raytracer/Raytracer.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32Lib/examples/VGASprites/explosion.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32Lib/examples/VGAWiFiTextTerminal/page.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32Lib/examples/VGA2DFeatures/rock.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32Lib/examples/LEDs/NyanCat/nyan.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32Lib/examples/LEDs/LEDWall3Camera/tools.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32Lib/examples/LEDs/LEDWall3Camera/effects.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32Lib/examples/LEDs/LEDWall3Camera/camera.h"
)

target_include_directories(bitluni-esp32lib INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ESP32Lib/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET adafruit-gfx-library)
    add_subdirectory(../../libs/adafruit-gfx-library build_adafruit-gfx-library)
endif()

target_link_libraries(bitluni-esp32lib INTERFACE
    arduino-compat
    adafruit-gfx-library
)
