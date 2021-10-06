add_library(m5-coreink INTERFACE)

target_sources(m5-coreink INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/M5-CoreInk/src/M5CoreInk.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/M5-CoreInk/src/utility/Button.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/M5-CoreInk/src/utility/BM8563.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/M5-CoreInk/src/utility/Ink_eSPI.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/M5-CoreInk/src/utility/Task.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/M5-CoreInk/src/utility/Ascii8x16.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/M5-CoreInk/src/utility/Ink_Sprite.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/M5-CoreInk/src/utility/Speaker.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/M5-CoreInk/src/utility/Ascii24x48.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/M5-CoreInk/src/utility/M5EPD.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/M5-CoreInk/src/utility/M5Timer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/M5-CoreInk/examples/FactoryTest/Num_55x40.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/M5-CoreInk/examples/FactoryTest/icon.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/M5-CoreInk/examples/FactoryTest/Num18x29.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/M5-CoreInk/examples/FactoryTest/CoreInk.c"
  "${CMAKE_CURRENT_LIST_DIR}/M5-CoreInk/src/M5CoreInk.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5-CoreInk/src/utility/M5Timer.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5-CoreInk/src/utility/Button.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5-CoreInk/src/utility/M5EPD.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5-CoreInk/src/utility/Speaker.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5-CoreInk/src/utility/WFT0154CZB3_INIT.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5-CoreInk/src/utility/Task.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5-CoreInk/src/utility/Ink_Sprite.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5-CoreInk/src/utility/config.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5-CoreInk/src/utility/Ink_eSPI.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5-CoreInk/src/utility/BM8563.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5-CoreInk/src/utility/fontResource.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5-CoreInk/examples/FactoryTest/myepd_res.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5-CoreInk/examples/FactoryTest/icon.h"
)

target_include_directories(m5-coreink INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/M5-CoreInk/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(m5-coreink INTERFACE
    arduino-compat
)
