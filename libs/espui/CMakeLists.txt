add_library(pac-espui INTERFACE)

target_sources(pac-espui INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ESPUI/src/ESPUI.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESPUI/src/ESPUI.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPUI/src/dataNormalizeCSS.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPUI/src/dataZeptoJS.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPUI/src/dataSliderJS.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPUI/src/dataStyleCSS.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPUI/src/dataGraphJS.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPUI/src/dataControlsJS.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPUI/src/dataTabbedcontentJS.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPUI/src/dataIndexHTML.h"
)

target_include_directories(pac-espui INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ESPUI/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-espui INTERFACE
    arduino-compat
)
