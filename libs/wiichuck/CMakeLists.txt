add_library(wiichuck INTERFACE)

target_sources(wiichuck INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/WiiChuck/src/Nunchuck.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/WiiChuck/src/Drums.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/WiiChuck/src/DJTable.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/WiiChuck/src/Accessory.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/WiiChuck/src/Guitar.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/WiiChuck/src/Drawsome.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/WiiChuck/src/Classic.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/WiiChuck/src/Drawsome.h"
  "${CMAKE_CURRENT_LIST_DIR}/WiiChuck/src/Drums.h"
  "${CMAKE_CURRENT_LIST_DIR}/WiiChuck/src/Accessory.h"
  "${CMAKE_CURRENT_LIST_DIR}/WiiChuck/src/DJTable.h"
  "${CMAKE_CURRENT_LIST_DIR}/WiiChuck/src/Nunchuck.h"
  "${CMAKE_CURRENT_LIST_DIR}/WiiChuck/src/Guitar.h"
  "${CMAKE_CURRENT_LIST_DIR}/WiiChuck/src/WiiChuck.h"
  "${CMAKE_CURRENT_LIST_DIR}/WiiChuck/src/Classic.h"
)

target_include_directories(wiichuck INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/WiiChuck/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(wiichuck INTERFACE
    arduino-compat
)
