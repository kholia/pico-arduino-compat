add_library(pac-epd INTERFACE)

target_sources(pac-epd INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/EPD/src/EPDPaint.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EPD/src/EPD1in54B.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EPD/src/EPDIF.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EPD/src/EPD1in54C.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EPD/src/EPD1in54.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EPD/examples/EPD1in54BShowImage/imagedata.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EPD/examples/EPD1in54ShowRunningTime/imagedata.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EPD/examples/EPD1in54CShowImage/imagedata.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EPD/src/font20.c"
  "${CMAKE_CURRENT_LIST_DIR}/EPD/src/font12.c"
  "${CMAKE_CURRENT_LIST_DIR}/EPD/src/font16.c"
  "${CMAKE_CURRENT_LIST_DIR}/EPD/src/font8.c"
  "${CMAKE_CURRENT_LIST_DIR}/EPD/src/font24.c"
  "${CMAKE_CURRENT_LIST_DIR}/EPD/src/EPD1in54.h"
  "${CMAKE_CURRENT_LIST_DIR}/EPD/src/fonts.h"
  "${CMAKE_CURRENT_LIST_DIR}/EPD/src/EPD1in54C.h"
  "${CMAKE_CURRENT_LIST_DIR}/EPD/src/EPD1in54B.h"
  "${CMAKE_CURRENT_LIST_DIR}/EPD/src/EPDIF.h"
  "${CMAKE_CURRENT_LIST_DIR}/EPD/src/EPDPaint.h"
  "${CMAKE_CURRENT_LIST_DIR}/EPD/examples/EPD1in54BShowImage/imagedata.h"
  "${CMAKE_CURRENT_LIST_DIR}/EPD/examples/EPD1in54ShowRunningTime/imagedata.h"
  "${CMAKE_CURRENT_LIST_DIR}/EPD/examples/EPD1in54CShowImage/imagedata.h"
)

target_include_directories(pac-epd INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/EPD/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-epd INTERFACE
    arduino-compat
)
