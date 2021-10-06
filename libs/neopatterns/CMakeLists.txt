add_library(neopatterns INTERFACE)

target_sources(neopatterns INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/NeoPatterns/src/MatrixNeoPixel.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/NeoPatterns/src/NeoPatterns.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/NeoPatterns/src/NeoPixel.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/NeoPatterns/src/MatrixSnake.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/NeoPatterns/src/MatrixNeoPatterns.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/NeoPatterns/examples/OpenLedRace/PlayRtttl.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/NeoPatterns/examples/OpenLedRace/AVRUtils.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/NeoPatterns/examples/AllPatternsOnMultiDevices/ADCUtils.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/NeoPatterns/src/utility/font_6x8.c"
  "${CMAKE_CURRENT_LIST_DIR}/NeoPatterns/src/utility/font_5x8.c"
  "${CMAKE_CURRENT_LIST_DIR}/NeoPatterns/src/utility/font_4x6.c"
  "${CMAKE_CURRENT_LIST_DIR}/NeoPatterns/src/utility/font_8x8.c"
  "${CMAKE_CURRENT_LIST_DIR}/NeoPatterns/src/fonts.h"
  "${CMAKE_CURRENT_LIST_DIR}/NeoPatterns/src/MatrixNeoPatterns.h"
  "${CMAKE_CURRENT_LIST_DIR}/NeoPatterns/src/DebugLevel.h"
  "${CMAKE_CURRENT_LIST_DIR}/NeoPatterns/src/NeoPatterns.h"
  "${CMAKE_CURRENT_LIST_DIR}/NeoPatterns/src/LongUnion.h"
  "${CMAKE_CURRENT_LIST_DIR}/NeoPatterns/src/MatrixSnake.h"
  "${CMAKE_CURRENT_LIST_DIR}/NeoPatterns/src/NeoPixel.h"
  "${CMAKE_CURRENT_LIST_DIR}/NeoPatterns/src/MatrixNeoPixel.h"
  "${CMAKE_CURRENT_LIST_DIR}/NeoPatterns/src/Colors.h"
  "${CMAKE_CURRENT_LIST_DIR}/NeoPatterns/examples/OpenLedRace/AVRUtils.h"
  "${CMAKE_CURRENT_LIST_DIR}/NeoPatterns/examples/OpenLedRace/pitches.h"
  "${CMAKE_CURRENT_LIST_DIR}/NeoPatterns/examples/OpenLedRace/PlayRtttl.h"
  "${CMAKE_CURRENT_LIST_DIR}/NeoPatterns/examples/AllPatternsOnMultiDevices/ADCUtils.h"
  "${CMAKE_CURRENT_LIST_DIR}/NeoPatterns/examples/TwoPatternsOnOneStrip/EasyButtonAtInt01.h"
  "${CMAKE_CURRENT_LIST_DIR}/NeoPatterns/examples/TwoPatternsOnOneStrip/EasyButtonAtInt01.cpp.h"
)

target_include_directories(neopatterns INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/NeoPatterns/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(neopatterns INTERFACE
    arduino-compat
)
