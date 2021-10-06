add_library(jpegdec INTERFACE)

target_sources(jpegdec INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/JPEGDEC/src/JPEGDEC.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/JPEGDEC/examples/epd_demo/Grayscale_IL0398.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/JPEGDEC/linux/main.c"
  "${CMAKE_CURRENT_LIST_DIR}/JPEGDEC/src/JPEGDEC.h"
  "${CMAKE_CURRENT_LIST_DIR}/JPEGDEC/examples/adafruit_gfx_demo/thumb_test.h"
  "${CMAKE_CURRENT_LIST_DIR}/JPEGDEC/examples/M5Stack/M5Fire/batman.h"
  "${CMAKE_CURRENT_LIST_DIR}/JPEGDEC/examples/M5Stack/M5Fire/ncc1701.h"
  "${CMAKE_CURRENT_LIST_DIR}/JPEGDEC/examples/M5Stack/M5Fire/thumb_test.h"
  "${CMAKE_CURRENT_LIST_DIR}/JPEGDEC/examples/M5Stack/M5Stack/batman.h"
  "${CMAKE_CURRENT_LIST_DIR}/JPEGDEC/examples/M5Stack/M5Stack/ncc1701.h"
  "${CMAKE_CURRENT_LIST_DIR}/JPEGDEC/examples/M5Stack/M5Stack/thumb_test.h"
  "${CMAKE_CURRENT_LIST_DIR}/JPEGDEC/examples/M5Stack/M5StickCPlus/batman.h"
  "${CMAKE_CURRENT_LIST_DIR}/JPEGDEC/examples/M5Stack/M5StickCPlus/ncc1701.h"
  "${CMAKE_CURRENT_LIST_DIR}/JPEGDEC/examples/M5Stack/M5StickCPlus/thumb_test.h"
  "${CMAKE_CURRENT_LIST_DIR}/JPEGDEC/examples/M5Stack/M5StickC/batman.h"
  "${CMAKE_CURRENT_LIST_DIR}/JPEGDEC/examples/M5Stack/M5StickC/ncc1701.h"
  "${CMAKE_CURRENT_LIST_DIR}/JPEGDEC/examples/M5Stack/M5StickC/thumb_test.h"
  "${CMAKE_CURRENT_LIST_DIR}/JPEGDEC/examples/M5Stack/M5Core2/batman.h"
  "${CMAKE_CURRENT_LIST_DIR}/JPEGDEC/examples/M5Stack/M5Core2/ncc1701.h"
  "${CMAKE_CURRENT_LIST_DIR}/JPEGDEC/examples/M5Stack/M5Core2/thumb_test.h"
  "${CMAKE_CURRENT_LIST_DIR}/JPEGDEC/examples/epd_demo/lange.h"
  "${CMAKE_CURRENT_LIST_DIR}/JPEGDEC/examples/epd_demo/Grayscale_IL0398.h"
  "${CMAKE_CURRENT_LIST_DIR}/JPEGDEC/test_images/st_peters.h"
  "${CMAKE_CURRENT_LIST_DIR}/JPEGDEC/test_images/tulips.h"
  "${CMAKE_CURRENT_LIST_DIR}/JPEGDEC/test_images/sciopero.h"
  "${CMAKE_CURRENT_LIST_DIR}/JPEGDEC/test_images/thumb_test.h"
)

target_include_directories(jpegdec INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/JPEGDEC/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(jpegdec INTERFACE
    arduino-compat
)
