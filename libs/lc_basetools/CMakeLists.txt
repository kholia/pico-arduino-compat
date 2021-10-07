add_library(pac-lc_basetools INTERFACE)

target_sources(pac-lc_basetools INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/LC_baseTools/colorObj.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LC_baseTools/textBuff.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LC_baseTools/idlers.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LC_baseTools/debug.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LC_baseTools/resizeBuff.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LC_baseTools/runningAvg.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LC_baseTools/mapper.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LC_baseTools/lists.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LC_baseTools/squareWave.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LC_baseTools/blinker.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LC_baseTools/multiMap.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LC_baseTools/timeObj.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LC_baseTools/mechButton.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LC_baseTools/examples/oneShot/oneShot.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LC_baseTools/mapper.h"
  "${CMAKE_CURRENT_LIST_DIR}/LC_baseTools/resizeBuff.h"
  "${CMAKE_CURRENT_LIST_DIR}/LC_baseTools/idlers.h"
  "${CMAKE_CURRENT_LIST_DIR}/LC_baseTools/mechButton.h"
  "${CMAKE_CURRENT_LIST_DIR}/LC_baseTools/textBuff.h"
  "${CMAKE_CURRENT_LIST_DIR}/LC_baseTools/squareWave.h"
  "${CMAKE_CURRENT_LIST_DIR}/LC_baseTools/multiMap.h"
  "${CMAKE_CURRENT_LIST_DIR}/LC_baseTools/timeObj.h"
  "${CMAKE_CURRENT_LIST_DIR}/LC_baseTools/runningAvg.h"
  "${CMAKE_CURRENT_LIST_DIR}/LC_baseTools/lists.h"
  "${CMAKE_CURRENT_LIST_DIR}/LC_baseTools/debug.h"
  "${CMAKE_CURRENT_LIST_DIR}/LC_baseTools/colorObj.h"
  "${CMAKE_CURRENT_LIST_DIR}/LC_baseTools/blinker.h"
  "${CMAKE_CURRENT_LIST_DIR}/LC_baseTools/examples/oneShot/oneShot.h"
)

target_include_directories(pac-lc_basetools INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/LC_baseTools"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-lc_basetools INTERFACE
    arduino-compat
)
