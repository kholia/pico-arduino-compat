add_library(pac-brainzy INTERFACE)

target_sources(pac-brainzy INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/brainzy-library/src/utility/BRAINZY.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/brainzy-library/extras/MrRoboticsLogo.c"
  "${CMAKE_CURRENT_LIST_DIR}/brainzy-library/src/BrainzyPinout.h"
  "${CMAKE_CURRENT_LIST_DIR}/brainzy-library/src/BRAINZY.h"
  "${CMAKE_CURRENT_LIST_DIR}/brainzy-library/src/Widgets.h"
  "${CMAKE_CURRENT_LIST_DIR}/brainzy-library/src/utility/WidgetSonar.h"
  "${CMAKE_CURRENT_LIST_DIR}/brainzy-library/src/utility/WidgetRGB.h"
  "${CMAKE_CURRENT_LIST_DIR}/brainzy-library/src/utility/RobbyConfig.h"
)

target_include_directories(pac-brainzy INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/brainzy-library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET pac-sd)
    add_subdirectory(../../libs/sd build_pac-sd)
endif()

target_link_libraries(pac-brainzy INTERFACE
    arduino-compat
    pac-sd
)
