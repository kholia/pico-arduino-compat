add_library(pac-radar-bgt60 INTERFACE)

target_sources(pac-radar-bgt60 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/arduino-radar-bgt60/src/bgt60-pal-gpio-ino.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-radar-bgt60/src/bgt60.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-radar-bgt60/src/bgt60-pal-timer-ino.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-radar-bgt60/src/bgt60-logger.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-radar-bgt60/src/bgt60-ino.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-radar-bgt60/src/bgt60-conf-dfl.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-radar-bgt60/src/bgt60-pal-logger.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-radar-bgt60/src/bgt60-logger.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-radar-bgt60/src/bgt60.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-radar-bgt60/src/bgt60-pal-gpio.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-radar-bgt60/src/bgt60-pal-gpio-ino.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-radar-bgt60/src/bgt60-types.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-radar-bgt60/src/bgt60-conf-opts.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-radar-bgt60/src/bgt60-pal-timer.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-radar-bgt60/src/bgt60-platf-ino.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-radar-bgt60/src/bgt60-conf.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-radar-bgt60/src/bgt60-ino.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-radar-bgt60/src/bgt60-pal-timer-ino.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-radar-bgt60/examples/trackMotionState/timer.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-radar-bgt60/examples/trackDirState/timer.h"
)

target_include_directories(pac-radar-bgt60 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/arduino-radar-bgt60/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-radar-bgt60 INTERFACE
    arduino-compat
)
