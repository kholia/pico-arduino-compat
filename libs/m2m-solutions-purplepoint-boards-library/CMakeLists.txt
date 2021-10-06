add_library(m2m-solutions-purplepoint-boards-library INTERFACE)

target_sources(m2m-solutions-purplepoint-boards-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/M2M_Boards/src/JouleDsBoard.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/M2M_Boards/src/VoltBoard.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/M2M_Boards/src/HertzBoard.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/M2M_Boards/src/util/core.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/M2M_Boards/src/util/rgbled.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/M2M_Boards/src/util/avrcore.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/M2M_Boards/src/JouleDsBoard.h"
  "${CMAKE_CURRENT_LIST_DIR}/M2M_Boards/src/HertzBoard.h"
  "${CMAKE_CURRENT_LIST_DIR}/M2M_Boards/src/VoltBoard.h"
  "${CMAKE_CURRENT_LIST_DIR}/M2M_Boards/src/util/avrcore.h"
  "${CMAKE_CURRENT_LIST_DIR}/M2M_Boards/src/util/rgbled.h"
  "${CMAKE_CURRENT_LIST_DIR}/M2M_Boards/src/util/core.h"
)

target_include_directories(m2m-solutions-purplepoint-boards-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/M2M_Boards/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(m2m-solutions-purplepoint-boards-library INTERFACE
    arduino-compat
)
