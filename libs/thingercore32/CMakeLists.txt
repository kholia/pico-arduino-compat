add_library(pac-thingercore32 INTERFACE)

target_sources(pac-thingercore32 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Core32/src/ThingerWebUI.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Core32/src/ThingerWifiConfig.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Core32/src/ThingerTaskController.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Core32/src/main.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Core32/src/ThingerConsole.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Core32/src/ThingerCore32.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Core32/src/ThingerCore32.h"
  "${CMAKE_CURRENT_LIST_DIR}/Core32/src/ThingerTaskController.h"
  "${CMAKE_CURRENT_LIST_DIR}/Core32/src/ThingerConsole.h"
  "${CMAKE_CURRENT_LIST_DIR}/Core32/src/ThingerWifiConfig.h"
)

target_include_directories(pac-thingercore32 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Core32/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-thingercore32 INTERFACE
    arduino-compat
)
