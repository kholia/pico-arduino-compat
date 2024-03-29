add_library(pac-smartmatrix-gfx INTERFACE)

target_sources(pac-smartmatrix-gfx INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SmartMatrix_GFX/SmartMatrix_GFX.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SmartMatrix_GFX/SmartMatrix_GFX.h"
  "${CMAKE_CURRENT_LIST_DIR}/SmartMatrix_GFX/examples/MatrixGFXDemo/smileytongue24.h"
  "${CMAKE_CURRENT_LIST_DIR}/SmartMatrix_GFX/examples/MatrixGFXDemo/yellowsmiley24.h"
  "${CMAKE_CURRENT_LIST_DIR}/SmartMatrix_GFX/examples/MatrixGFXDemo/linux32.h"
  "${CMAKE_CURRENT_LIST_DIR}/SmartMatrix_GFX/examples/MatrixGFXDemo/heart24.h"
  "${CMAKE_CURRENT_LIST_DIR}/SmartMatrix_GFX/examples/MatrixGFXDemo/bluesmiley24.h"
  "${CMAKE_CURRENT_LIST_DIR}/SmartMatrix_GFX/examples/MatrixGFXDemo/google32.h"
)

target_include_directories(pac-smartmatrix-gfx INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SmartMatrix_GFX"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET pac-adafruit-gfx-library)
    add_subdirectory(../../libs/adafruit-gfx-library build_pac-adafruit-gfx-library)
endif()

target_link_libraries(pac-smartmatrix-gfx INTERFACE
    arduino-compat
    pac-adafruit-gfx-library
)
