add_library(pac-witty INTERFACE)

target_sources(pac-witty INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Witty/src/Glis.h"
  "${CMAKE_CURRENT_LIST_DIR}/Witty/src/Telec.h"
  "${CMAKE_CURRENT_LIST_DIR}/Witty/src/Witty.h"
  "${CMAKE_CURRENT_LIST_DIR}/Witty/src/I2Ctwi.h"
  "${CMAKE_CURRENT_LIST_DIR}/Witty/src/TerSer.h"
  "${CMAKE_CURRENT_LIST_DIR}/Witty/src/Inter2.h"
  "${CMAKE_CURRENT_LIST_DIR}/Witty/src/Apa102.h"
  "${CMAKE_CURRENT_LIST_DIR}/Witty/src/GetPush.h"
  "${CMAKE_CURRENT_LIST_DIR}/Witty/src/Pfm.h"
  "${CMAKE_CURRENT_LIST_DIR}/Witty/src/Gy521.h"
)

target_include_directories(pac-witty INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Witty/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-witty INTERFACE
    arduino-compat
)
