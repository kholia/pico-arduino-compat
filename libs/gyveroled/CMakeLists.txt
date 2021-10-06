add_library(gyveroled INTERFACE)

target_sources(gyveroled INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/GyverOLED/src/icons_8x8.h"
  "${CMAKE_CURRENT_LIST_DIR}/GyverOLED/src/GyverOLED.h"
  "${CMAKE_CURRENT_LIST_DIR}/GyverOLED/src/icons_7x7.h"
  "${CMAKE_CURRENT_LIST_DIR}/GyverOLED/src/charMap.h"
)

target_include_directories(gyveroled INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/GyverOLED/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(gyveroled INTERFACE
    arduino-compat
)
