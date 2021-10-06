add_library(brainzy INTERFACE)

target_sources(brainzy INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/brainzy-library/src/utility/BRAINZY.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/brainzy-library/extras/MrRoboticsLogo.c"
  "${CMAKE_CURRENT_LIST_DIR}/brainzy-library/src/BrainzyPinout.h"
  "${CMAKE_CURRENT_LIST_DIR}/brainzy-library/src/BRAINZY.h"
  "${CMAKE_CURRENT_LIST_DIR}/brainzy-library/src/Widgets.h"
  "${CMAKE_CURRENT_LIST_DIR}/brainzy-library/src/utility/WidgetSonar.h"
  "${CMAKE_CURRENT_LIST_DIR}/brainzy-library/src/utility/WidgetRGB.h"
  "${CMAKE_CURRENT_LIST_DIR}/brainzy-library/src/utility/RobbyConfig.h"
)

target_include_directories(brainzy INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/brainzy-library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET official-sd)
    add_subdirectory(../../official-libs/sd build_official-sd)
endif()

target_link_libraries(brainzy INTERFACE
    arduino-compat
    official-sd
)
