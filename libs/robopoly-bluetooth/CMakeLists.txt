add_library(pac-robopoly-bluetooth INTERFACE)

target_sources(pac-robopoly-bluetooth INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Robopoly_Bluetooth/src/Bluetooth.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Robopoly_Bluetooth/src/Bluetooth.h"
)

target_include_directories(pac-robopoly-bluetooth INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Robopoly_Bluetooth/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-robopoly-bluetooth INTERFACE
    arduino-compat
)
