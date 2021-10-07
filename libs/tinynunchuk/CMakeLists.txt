add_library(pac-tinynunchuk INTERFACE)

target_sources(pac-tinynunchuk INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TinyNunchuk/src/TinyNunchuk.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TinyNunchuk/src/TinyNunchuk_tiny-i2c.h"
  "${CMAKE_CURRENT_LIST_DIR}/TinyNunchuk/src/TinyNunchuk_TinyWireM.h"
  "${CMAKE_CURRENT_LIST_DIR}/TinyNunchuk/src/TinyNunchuk_common.h"
  "${CMAKE_CURRENT_LIST_DIR}/TinyNunchuk/src/TinyNunchuk_Wire.h"
  "${CMAKE_CURRENT_LIST_DIR}/TinyNunchuk/src/TinyNunchuk.h"
  "${CMAKE_CURRENT_LIST_DIR}/TinyNunchuk/examples/PacMan/PacManMap.h"
  "${CMAKE_CURRENT_LIST_DIR}/TinyNunchuk/examples/PacMan/Graphics.h"
)

target_include_directories(pac-tinynunchuk INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TinyNunchuk/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-tinynunchuk INTERFACE
    arduino-compat
)
