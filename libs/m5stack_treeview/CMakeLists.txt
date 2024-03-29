add_library(pac-m5stack_treeview INTERFACE)

target_sources(pac-m5stack_treeview INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/M5Stack_TreeView/src/MenuItem.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/M5Stack_TreeView/src/MenuItemToggle.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/M5Stack_TreeView/src/MenuItemWiFiClient.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/M5Stack_TreeView/src/MenuItemFS.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/M5Stack_TreeView/src/M5TreeView.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/M5Stack_TreeView/src/MenuItemSD.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/M5Stack_TreeView/src/MenuItemNumeric.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/M5Stack_TreeView/src/MenuItemSPIFFS.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/M5Stack_TreeView/src/MenuItemFS.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5Stack_TreeView/src/MenuItem.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5Stack_TreeView/src/MenuItemSD.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5Stack_TreeView/src/MenuItemToggle.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5Stack_TreeView/src/Rect16.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5Stack_TreeView/src/MenuItemSPIFFS.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5Stack_TreeView/src/M5TreeView.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5Stack_TreeView/src/MenuItemWiFiClient.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5Stack_TreeView/src/MenuCallBack.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5Stack_TreeView/src/MenuItemNumeric.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5Stack_TreeView/examples/demo/HeaderSample.h"
)

target_include_directories(pac-m5stack_treeview INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/M5Stack_TreeView/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET pac-sd)
    add_subdirectory(../../libs/sd build_pac-sd)
endif()

target_link_libraries(pac-m5stack_treeview INTERFACE
    arduino-compat
    pac-sd
)
