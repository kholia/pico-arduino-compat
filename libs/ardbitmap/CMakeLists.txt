add_library(pac-ardbitmap INTERFACE)

target_sources(pac-ardbitmap INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ArdBitmap/src/ArdBitmap.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArdBitmap/examples/CompleteTest/bitmaps.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArdBitmap/examples/Sample2-Mirror/bitmaps.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArdBitmap/examples/Sample6-Complex/bitmaps.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArdBitmap/examples/Sample3-Resize/bitmaps.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArdBitmap/examples/Sample1-Basic/bitmaps.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArdBitmap/examples/Sample4-Animation/bitmaps.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArdBitmap/examples/Sample5-Basic-Arduboy2/bitmaps.h"
)

target_include_directories(pac-ardbitmap INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ArdBitmap/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-ardbitmap INTERFACE
    arduino-compat
)
