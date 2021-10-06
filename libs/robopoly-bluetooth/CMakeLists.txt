add_library(robopoly-bluetooth INTERFACE)

target_sources(robopoly-bluetooth INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Robopoly_Bluetooth/src/Bluetooth.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Robopoly_Bluetooth/src/Bluetooth.h"
)

target_include_directories(robopoly-bluetooth INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Robopoly_Bluetooth/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(robopoly-bluetooth INTERFACE
    arduino-compat
)
