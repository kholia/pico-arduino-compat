add_library(pac-ledcontrol INTERFACE)

target_sources(pac-ledcontrol INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/LedControl/src/LedControl.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LedControl/src/LedControl.h"
)

target_include_directories(pac-ledcontrol INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/LedControl/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-ledcontrol INTERFACE
    arduino-compat
)
