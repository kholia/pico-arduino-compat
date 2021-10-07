add_library(pac-efont-unicode-font-data INTERFACE)

target_sources(pac-efont-unicode-font-data INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/efont/examples/M5StickCPlus/efontWrapper/PlatformIO/src/main.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/efont/src/efontM5StickC.h"
  "${CMAKE_CURRENT_LIST_DIR}/efont/src/efontEnableAscii.h"
  "${CMAKE_CURRENT_LIST_DIR}/efont/src/efontFontData.h"
  "${CMAKE_CURRENT_LIST_DIR}/efont/src/efontWrapper.h"
  "${CMAKE_CURRENT_LIST_DIR}/efont/src/efont.h"
  "${CMAKE_CURRENT_LIST_DIR}/efont/src/efontM5StickCPlus.h"
  "${CMAKE_CURRENT_LIST_DIR}/efont/src/efontM5StackCoreInk.h"
  "${CMAKE_CURRENT_LIST_DIR}/efont/src/efontEnableAll.h"
  "${CMAKE_CURRENT_LIST_DIR}/efont/src/efontESP32.h"
  "${CMAKE_CURRENT_LIST_DIR}/efont/src/efontEnableJaMini.h"
  "${CMAKE_CURRENT_LIST_DIR}/efont/src/efontEnableCJK.h"
  "${CMAKE_CURRENT_LIST_DIR}/efont/src/efontEnableKr.h"
  "${CMAKE_CURRENT_LIST_DIR}/efont/src/efontEnableCn.h"
  "${CMAKE_CURRENT_LIST_DIR}/efont/src/efontEnableTw.h"
  "${CMAKE_CURRENT_LIST_DIR}/efont/src/efontEnableJa.h"
)

target_include_directories(pac-efont-unicode-font-data INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/efont/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET pac-adafruit-gfx-library)
    add_subdirectory(../../libs/adafruit-gfx-library build_pac-adafruit-gfx-library)
endif()

target_link_libraries(pac-efont-unicode-font-data INTERFACE
    arduino-compat
    pac-adafruit-gfx-library
)
