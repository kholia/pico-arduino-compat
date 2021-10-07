add_library(pac-fabo-307-ble-nordic INTERFACE)

target_sources(pac-fabo-307-ble-nordic INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/FaBoBLE-Nordic-Library/src/fabo-nordic.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FaBoBLE-Nordic-Library/src/utility/CommandParser.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FaBoBLE-Nordic-Library/src/utility/NordicBLE.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FaBoBLE-Nordic-Library/src/fabo-nordic.h"
  "${CMAKE_CURRENT_LIST_DIR}/FaBoBLE-Nordic-Library/src/utility/CommandParser.h"
  "${CMAKE_CURRENT_LIST_DIR}/FaBoBLE-Nordic-Library/src/utility/NordicBLE.h"
)

target_include_directories(pac-fabo-307-ble-nordic INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/FaBoBLE-Nordic-Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-fabo-307-ble-nordic INTERFACE
    arduino-compat
)
