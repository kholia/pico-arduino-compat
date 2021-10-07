add_library(pac-sakuraio INTERFACE)

target_sources(pac-sakuraio INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SakuraIOArduino/src/SakuraIOUtils.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SakuraIOArduino/src/SakuraIOAlphaCompat.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SakuraIOArduino/src/SakuraIO.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SakuraIOArduino/src/SakuraIO_I2C.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SakuraIOArduino/src/SakuraIO_SPI.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SakuraIOArduino/examples/Shell/ntshell/core/ntlibc.c"
  "${CMAKE_CURRENT_LIST_DIR}/SakuraIOArduino/examples/Shell/ntshell/core/text_history.c"
  "${CMAKE_CURRENT_LIST_DIR}/SakuraIOArduino/examples/Shell/ntshell/core/vtsend.c"
  "${CMAKE_CURRENT_LIST_DIR}/SakuraIOArduino/examples/Shell/ntshell/core/ntshell.c"
  "${CMAKE_CURRENT_LIST_DIR}/SakuraIOArduino/examples/Shell/ntshell/core/vtrecv.c"
  "${CMAKE_CURRENT_LIST_DIR}/SakuraIOArduino/examples/Shell/ntshell/core/text_editor.c"
  "${CMAKE_CURRENT_LIST_DIR}/SakuraIOArduino/examples/Shell/ntshell/util/ntstdio.c"
  "${CMAKE_CURRENT_LIST_DIR}/SakuraIOArduino/examples/Shell/ntshell/util/ntopt.c"
  "${CMAKE_CURRENT_LIST_DIR}/SakuraIOArduino/src/SakuraIO.h"
  "${CMAKE_CURRENT_LIST_DIR}/SakuraIOArduino/src/SakuraIOAlphaCompat.h"
  "${CMAKE_CURRENT_LIST_DIR}/SakuraIOArduino/src/SakuraIOUtils.h"
  "${CMAKE_CURRENT_LIST_DIR}/SakuraIOArduino/src/SakuraIO/commands.h"
  "${CMAKE_CURRENT_LIST_DIR}/SakuraIOArduino/src/SakuraIO/debug.h"
  "${CMAKE_CURRENT_LIST_DIR}/SakuraIOArduino/examples/Shell/commands.h"
  "${CMAKE_CURRENT_LIST_DIR}/SakuraIOArduino/examples/Shell/ntshell.h"
  "${CMAKE_CURRENT_LIST_DIR}/SakuraIOArduino/examples/Shell/print.h"
  "${CMAKE_CURRENT_LIST_DIR}/SakuraIOArduino/examples/Shell/ntshell/core/ntlibc.h"
  "${CMAKE_CURRENT_LIST_DIR}/SakuraIOArduino/examples/Shell/ntshell/core/text_history.h"
  "${CMAKE_CURRENT_LIST_DIR}/SakuraIOArduino/examples/Shell/ntshell/core/ntconf.h"
  "${CMAKE_CURRENT_LIST_DIR}/SakuraIOArduino/examples/Shell/ntshell/core/text_editor.h"
  "${CMAKE_CURRENT_LIST_DIR}/SakuraIOArduino/examples/Shell/ntshell/core/ntshell.h"
  "${CMAKE_CURRENT_LIST_DIR}/SakuraIOArduino/examples/Shell/ntshell/core/vtsend.h"
  "${CMAKE_CURRENT_LIST_DIR}/SakuraIOArduino/examples/Shell/ntshell/core/ntint.h"
  "${CMAKE_CURRENT_LIST_DIR}/SakuraIOArduino/examples/Shell/ntshell/core/vtrecv.h"
  "${CMAKE_CURRENT_LIST_DIR}/SakuraIOArduino/examples/Shell/ntshell/util/ntstdio.h"
  "${CMAKE_CURRENT_LIST_DIR}/SakuraIOArduino/examples/Shell/ntshell/util/ntopt.h"
)

target_include_directories(pac-sakuraio INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SakuraIOArduino/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-sakuraio INTERFACE
    arduino-compat
)
