add_library(pac-ili9341_t3 INTERFACE)

target_sources(pac-ili9341_t3 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ILI9341_t3/ILI9341_t3.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ILI9341_t3/font_Arial.c"
  "${CMAKE_CURRENT_LIST_DIR}/ILI9341_t3/font_ArialBold.c"
  "${CMAKE_CURRENT_LIST_DIR}/ILI9341_t3/glcdfont.c"
  "${CMAKE_CURRENT_LIST_DIR}/ILI9341_t3/extras/bdf_to_ili9341.c"
  "${CMAKE_CURRENT_LIST_DIR}/ILI9341_t3/examples/pictureEmbed/picture.c"
  "${CMAKE_CURRENT_LIST_DIR}/ILI9341_t3/ILI9341_t3.h"
  "${CMAKE_CURRENT_LIST_DIR}/ILI9341_t3/font_Arial.h"
  "${CMAKE_CURRENT_LIST_DIR}/ILI9341_t3/font_ArialBold.h"
  "${CMAKE_CURRENT_LIST_DIR}/ILI9341_t3/examples/DemoSauce/TwistyTextFont.h"
  "${CMAKE_CURRENT_LIST_DIR}/ILI9341_t3/examples/DemoSauce/TransitionSquares.h"
  "${CMAKE_CURRENT_LIST_DIR}/ILI9341_t3/examples/DemoSauce/TransitionHalftone.h"
  "${CMAKE_CURRENT_LIST_DIR}/ILI9341_t3/examples/DemoSauce/BaseTransition.h"
  "${CMAKE_CURRENT_LIST_DIR}/ILI9341_t3/examples/DemoSauce/FrameParams.h"
  "${CMAKE_CURRENT_LIST_DIR}/ILI9341_t3/examples/DemoSauce/Checkerboard.h"
  "${CMAKE_CURRENT_LIST_DIR}/ILI9341_t3/examples/DemoSauce/Cube3D.h"
  "${CMAKE_CURRENT_LIST_DIR}/ILI9341_t3/examples/DemoSauce/TriangleWeb.h"
  "${CMAKE_CURRENT_LIST_DIR}/ILI9341_t3/examples/DemoSauce/PlasmaYellow.h"
  "${CMAKE_CURRENT_LIST_DIR}/ILI9341_t3/examples/DemoSauce/TransitionScroll.h"
  "${CMAKE_CURRENT_LIST_DIR}/ILI9341_t3/examples/DemoSauce/MathUtil.h"
  "${CMAKE_CURRENT_LIST_DIR}/ILI9341_t3/examples/DemoSauce/TransitionDither.h"
  "${CMAKE_CURRENT_LIST_DIR}/ILI9341_t3/examples/DemoSauce/Sphere3D.h"
  "${CMAKE_CURRENT_LIST_DIR}/ILI9341_t3/examples/DemoSauce/MagentaSquares.h"
  "${CMAKE_CURRENT_LIST_DIR}/ILI9341_t3/examples/DemoSauce/Leaves.h"
  "${CMAKE_CURRENT_LIST_DIR}/ILI9341_t3/examples/DemoSauce/BaseAnimation.h"
  "${CMAKE_CURRENT_LIST_DIR}/ILI9341_t3/examples/DemoSauce/TwistyText.h"
  "${CMAKE_CURRENT_LIST_DIR}/ILI9341_t3/examples/DemoSauce/PlasmaCloud.h"
  "${CMAKE_CURRENT_LIST_DIR}/ILI9341_t3/examples/DemoSauce/Waveform.h"
)

target_include_directories(pac-ili9341_t3 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ILI9341_t3"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-ili9341_t3 INTERFACE
    arduino-compat
)
