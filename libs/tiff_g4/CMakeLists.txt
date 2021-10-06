add_library(tiff_g4 INTERFACE)

target_sources(tiff_g4 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TIFF_G4/src/TIFF_G4.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TIFF_G4/examples/epd4in2/imagedata.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TIFF_G4/examples/epd4in2/font20.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TIFF_G4/examples/epd4in2/font16.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TIFF_G4/examples/epd4in2/epd4in2.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TIFF_G4/examples/epd4in2/epdpaint.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TIFF_G4/examples/epd4in2/font8.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TIFF_G4/examples/epd4in2/font24.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TIFF_G4/examples/epd4in2/epdif.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TIFF_G4/examples/epd4in2/font12.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TIFF_G4/linux/main.c"
  "${CMAKE_CURRENT_LIST_DIR}/TIFF_G4/src/tiffg4.c"
  "${CMAKE_CURRENT_LIST_DIR}/TIFF_G4/src/TIFF_G4.h"
  "${CMAKE_CURRENT_LIST_DIR}/TIFF_G4/examples/adafruit_tiff_demo/arduino_logo.h"
  "${CMAKE_CURRENT_LIST_DIR}/TIFF_G4/examples/epd4in2/eink.h"
  "${CMAKE_CURRENT_LIST_DIR}/TIFF_G4/examples/epd4in2/notes.h"
  "${CMAKE_CURRENT_LIST_DIR}/TIFF_G4/examples/epd4in2/fonts.h"
  "${CMAKE_CURRENT_LIST_DIR}/TIFF_G4/examples/epd4in2/epd4in2.h"
  "${CMAKE_CURRENT_LIST_DIR}/TIFF_G4/examples/epd4in2/imagedata.h"
  "${CMAKE_CURRENT_LIST_DIR}/TIFF_G4/examples/epd4in2/epdif.h"
  "${CMAKE_CURRENT_LIST_DIR}/TIFF_G4/examples/epd4in2/epdpaint.h"
  "${CMAKE_CURRENT_LIST_DIR}/TIFF_G4/examples/epd4in2/notes_small.h"
  "${CMAKE_CURRENT_LIST_DIR}/TIFF_G4/test_images/notes.h"
  "${CMAKE_CURRENT_LIST_DIR}/TIFF_G4/test_images/cd.h"
)

target_include_directories(tiff_g4 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TIFF_G4/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(tiff_g4 INTERFACE
    arduino-compat
)
