add_library(pac-dmd32 INTERFACE)

target_sources(pac-dmd32 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/DMD32/DMD32.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DMD32/DMD32.h"
  "${CMAKE_CURRENT_LIST_DIR}/DMD32/fonts/BodoniMTBlack24.h"
  "${CMAKE_CURRENT_LIST_DIR}/DMD32/fonts/Arial14.h"
  "${CMAKE_CURRENT_LIST_DIR}/DMD32/fonts/Comic24.h"
  "${CMAKE_CURRENT_LIST_DIR}/DMD32/fonts/Arial_Black21.h"
  "${CMAKE_CURRENT_LIST_DIR}/DMD32/fonts/Arial_Black_16_ISO_8859_1.h"
  "${CMAKE_CURRENT_LIST_DIR}/DMD32/fonts/Tahoma_32.h"
  "${CMAKE_CURRENT_LIST_DIR}/DMD32/fonts/Arial_38b.h"
  "${CMAKE_CURRENT_LIST_DIR}/DMD32/fonts/SystemFont5x7.h"
  "${CMAKE_CURRENT_LIST_DIR}/DMD32/fonts/Arial_black_16.h"
  "${CMAKE_CURRENT_LIST_DIR}/DMD32/fonts/Droid_Sans_24.h"
)

target_include_directories(pac-dmd32 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/DMD32"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-dmd32 INTERFACE
    arduino-compat
)
