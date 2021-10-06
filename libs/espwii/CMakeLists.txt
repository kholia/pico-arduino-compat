add_library(espwii INTERFACE)

target_sources(espwii INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/EspWii/src/controller/ControllerFactory.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EspWii/src/controller/UdpController.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EspWii/src/server/WiiClassicServer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EspWii/src/server/ServerStatus.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EspWii/src/gamelogic/GameLogic.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EspWii/src/EspWii.h"
  "${CMAKE_CURRENT_LIST_DIR}/EspWii/src/controller/LocalController.h"
  "${CMAKE_CURRENT_LIST_DIR}/EspWii/src/controller/UdpController.h"
  "${CMAKE_CURRENT_LIST_DIR}/EspWii/src/controller/AbstractController.h"
  "${CMAKE_CURRENT_LIST_DIR}/EspWii/src/server/ServerStatus.h"
  "${CMAKE_CURRENT_LIST_DIR}/EspWii/src/server/WiiClassicServer.h"
  "${CMAKE_CURRENT_LIST_DIR}/EspWii/src/gamelogic/AbstractRobot.h"
  "${CMAKE_CURRENT_LIST_DIR}/EspWii/src/gamelogic/GameLogic.h"
)

target_include_directories(espwii INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/EspWii/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(espwii INTERFACE
    arduino-compat
)
