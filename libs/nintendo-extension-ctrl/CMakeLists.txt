add_library(nintendo-extension-ctrl INTERFACE)

target_sources(nintendo-extension-ctrl INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/NintendoExtensionCtrl/src/controllers/Nunchuk.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/NintendoExtensionCtrl/src/controllers/uDrawTablet.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/NintendoExtensionCtrl/src/controllers/DJTurntable.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/NintendoExtensionCtrl/src/controllers/ClassicController.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/NintendoExtensionCtrl/src/controllers/DrumController.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/NintendoExtensionCtrl/src/controllers/DrawsomeTablet.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/NintendoExtensionCtrl/src/controllers/GuitarController.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/NintendoExtensionCtrl/src/internal/NXC_LinkedList.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/NintendoExtensionCtrl/src/internal/ExtensionController.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/NintendoExtensionCtrl/src/internal/NXC_Utils.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/NintendoExtensionCtrl/src/NintendoExtensionCtrl.h"
  "${CMAKE_CURRENT_LIST_DIR}/NintendoExtensionCtrl/src/controllers/GuitarController.h"
  "${CMAKE_CURRENT_LIST_DIR}/NintendoExtensionCtrl/src/controllers/Nunchuk.h"
  "${CMAKE_CURRENT_LIST_DIR}/NintendoExtensionCtrl/src/controllers/DJTurntable.h"
  "${CMAKE_CURRENT_LIST_DIR}/NintendoExtensionCtrl/src/controllers/DrumController.h"
  "${CMAKE_CURRENT_LIST_DIR}/NintendoExtensionCtrl/src/controllers/DrawsomeTablet.h"
  "${CMAKE_CURRENT_LIST_DIR}/NintendoExtensionCtrl/src/controllers/ClassicController.h"
  "${CMAKE_CURRENT_LIST_DIR}/NintendoExtensionCtrl/src/controllers/uDrawTablet.h"
  "${CMAKE_CURRENT_LIST_DIR}/NintendoExtensionCtrl/src/internal/NXC_DataMaps.h"
  "${CMAKE_CURRENT_LIST_DIR}/NintendoExtensionCtrl/src/internal/NXC_Identity.h"
  "${CMAKE_CURRENT_LIST_DIR}/NintendoExtensionCtrl/src/internal/NXC_Utils.h"
  "${CMAKE_CURRENT_LIST_DIR}/NintendoExtensionCtrl/src/internal/ExtensionController.h"
  "${CMAKE_CURRENT_LIST_DIR}/NintendoExtensionCtrl/src/internal/NXC_LinkedList.h"
  "${CMAKE_CURRENT_LIST_DIR}/NintendoExtensionCtrl/src/internal/NXC_Comms.h"
)

target_include_directories(nintendo-extension-ctrl INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/NintendoExtensionCtrl/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(nintendo-extension-ctrl INTERFACE
    arduino-compat
)
