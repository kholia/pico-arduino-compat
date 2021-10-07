add_library(pac-atalkarduino INTERFACE)

target_sources(pac-atalkarduino INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/aTalkArduino/src/atalk_serial.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/aTalkArduino/src/atalk/base64.c"
  "${CMAKE_CURRENT_LIST_DIR}/aTalkArduino/src/atalk/base16.c"
  "${CMAKE_CURRENT_LIST_DIR}/aTalkArduino/src/atalk/queue.c"
  "${CMAKE_CURRENT_LIST_DIR}/aTalkArduino/src/atalk/crc_ccitt.c"
  "${CMAKE_CURRENT_LIST_DIR}/aTalkArduino/src/atalk/atalk.c"
  "${CMAKE_CURRENT_LIST_DIR}/aTalkArduino/src/atalk/atalk_loop.c"
  "${CMAKE_CURRENT_LIST_DIR}/aTalkArduino/src/atalk_serial.h"
  "${CMAKE_CURRENT_LIST_DIR}/aTalkArduino/src/aTalk.h"
  "${CMAKE_CURRENT_LIST_DIR}/aTalkArduino/src/atalk/crc_ccitt.h"
  "${CMAKE_CURRENT_LIST_DIR}/aTalkArduino/src/atalk/queue.h"
  "${CMAKE_CURRENT_LIST_DIR}/aTalkArduino/src/atalk/atalk_loop.h"
  "${CMAKE_CURRENT_LIST_DIR}/aTalkArduino/src/atalk/base16.h"
  "${CMAKE_CURRENT_LIST_DIR}/aTalkArduino/src/atalk/atalk.h"
  "${CMAKE_CURRENT_LIST_DIR}/aTalkArduino/src/atalk/base64.h"
)

target_include_directories(pac-atalkarduino INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/aTalkArduino/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-atalkarduino INTERFACE
    arduino-compat
)
