add_library(displaymenu INTERFACE)

target_sources(displaymenu INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/DisplayMenu/src/DisplayMenu.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DisplayMenu/src/DisplayPage.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DisplayMenu/src/DisplayPageList.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DisplayMenu/src/DisplayLabelList.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DisplayMenu/src/DisplayButtonList.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DisplayMenu/src/DisplayLabel.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DisplayMenu/src/DisplayButton.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DisplayMenu/src/DisplayPage.h"
  "${CMAKE_CURRENT_LIST_DIR}/DisplayMenu/src/DisplayButton.h"
  "${CMAKE_CURRENT_LIST_DIR}/DisplayMenu/src/DisplayLabel.h"
  "${CMAKE_CURRENT_LIST_DIR}/DisplayMenu/src/DisplayButtonList.h"
  "${CMAKE_CURRENT_LIST_DIR}/DisplayMenu/src/DisplayPageList.h"
  "${CMAKE_CURRENT_LIST_DIR}/DisplayMenu/src/DisplayGlobals.h"
  "${CMAKE_CURRENT_LIST_DIR}/DisplayMenu/src/DisplayLabelList.h"
  "${CMAKE_CURRENT_LIST_DIR}/DisplayMenu/src/LinkedList.h"
  "${CMAKE_CURRENT_LIST_DIR}/DisplayMenu/src/DisplayMenu.h"
  "${CMAKE_CURRENT_LIST_DIR}/DisplayMenu/examples/EditValues/editpagesetup.h"
  "${CMAKE_CURRENT_LIST_DIR}/DisplayMenu/examples/EditValues/menusetup.h"
)

target_include_directories(displaymenu INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/DisplayMenu/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(displaymenu INTERFACE
    arduino-compat
)
