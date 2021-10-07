add_library(pac-panel.h-for-neopixel-matrix INTERFACE)

target_sources(pac-panel.h-for-neopixel-matrix INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Pixel-and-Play-Arduino-Library/src/Panel.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Pixel-and-Play-Arduino-Library/examples/minesRunner/map.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Pixel-and-Play-Arduino-Library/examples/minesRunner/ball.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Pixel-and-Play-Arduino-Library/examples/minesRunner-Acc/map.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Pixel-and-Play-Arduino-Library/examples/minesRunner-Acc/ball.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Pixel-and-Play-Arduino-Library/examples/minesRunner/imageList.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/Pixel-and-Play-Arduino-Library/examples/minesRunner/ball.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/Pixel-and-Play-Arduino-Library/examples/minesRunner/map.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/Pixel-and-Play-Arduino-Library/examples/minesRunner/timeBar.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/Pixel-and-Play-Arduino-Library/examples/minesRunner-Acc/imageList.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/Pixel-and-Play-Arduino-Library/examples/minesRunner-Acc/ball.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/Pixel-and-Play-Arduino-Library/examples/minesRunner-Acc/map.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/Pixel-and-Play-Arduino-Library/examples/minesRunner-Acc/timeBar.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/Pixel-and-Play-Arduino-Library/src/Panel.h"
)

target_include_directories(pac-panel.h-for-neopixel-matrix INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Pixel-and-Play-Arduino-Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-panel.h-for-neopixel-matrix INTERFACE
    arduino-compat
)
