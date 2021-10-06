add_library(flicker INTERFACE)

target_sources(flicker INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Flicker/src/TouchVelocity.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Flicker/src/TouchVariable.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Flicker/src/TouchSwitch.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Flicker/src/TouchSwitch.h"
  "${CMAKE_CURRENT_LIST_DIR}/Flicker/src/TouchVariable.h"
  "${CMAKE_CURRENT_LIST_DIR}/Flicker/src/Flicker.h"
  "${CMAKE_CURRENT_LIST_DIR}/Flicker/src/TouchVelocity.h"
)

target_include_directories(flicker INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Flicker/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(flicker INTERFACE
    arduino-compat
)
