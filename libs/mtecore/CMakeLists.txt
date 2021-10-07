add_library(pac-mtecore INTERFACE)

target_sources(pac-mtecore INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MteCore/src/MteCore.h"
  "${CMAKE_CURRENT_LIST_DIR}/MteCore/src/util/AnalogCore.h"
  "${CMAKE_CURRENT_LIST_DIR}/MteCore/src/util/OutputCore.h"
  "${CMAKE_CURRENT_LIST_DIR}/MteCore/src/util/CounterCore.h"
  "${CMAKE_CURRENT_LIST_DIR}/MteCore/src/util/TimerCore.h"
  "${CMAKE_CURRENT_LIST_DIR}/MteCore/src/util/PWMCore.h"
  "${CMAKE_CURRENT_LIST_DIR}/MteCore/src/util/InputCore.h"
)

target_include_directories(pac-mtecore INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MteCore/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-mtecore INTERFACE
    arduino-compat
)
