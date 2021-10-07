add_library(pac-fourteensegdisplay INTERFACE)

target_sources(pac-fourteensegdisplay INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/FourteenSegDisplay/src/NineSegDisplay.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FourteenSegDisplay/src/SevenSegDisplay.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FourteenSegDisplay/src/SixteenSegDisplay.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FourteenSegDisplay/src/FourteenSegDisplay.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FourteenSegDisplay/src/SixteenSegDisplay.h"
  "${CMAKE_CURRENT_LIST_DIR}/FourteenSegDisplay/src/SevenSegDisplay.h"
  "${CMAKE_CURRENT_LIST_DIR}/FourteenSegDisplay/src/NineSegDisplay.h"
  "${CMAKE_CURRENT_LIST_DIR}/FourteenSegDisplay/src/FourteenSegDisplay.h"
  "${CMAKE_CURRENT_LIST_DIR}/FourteenSegDisplay/src/FourteenSegDisplayFont.h"
  "${CMAKE_CURRENT_LIST_DIR}/FourteenSegDisplay/src/NineSegDisplayFont.h"
  "${CMAKE_CURRENT_LIST_DIR}/FourteenSegDisplay/src/SixteenSegDisplayFont.h"
  "${CMAKE_CURRENT_LIST_DIR}/FourteenSegDisplay/src/SevenSegDisplayFont.h"
)

target_include_directories(pac-fourteensegdisplay INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/FourteenSegDisplay/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-fourteensegdisplay INTERFACE
    arduino-compat
)
