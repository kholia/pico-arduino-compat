add_library(pac-r89m-pushbutton INTERFACE)

target_sources(pac-r89m-pushbutton INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/PushButton/src/PushButton/PushButton.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/PushButton/src/PushButton.h"
)

target_include_directories(pac-r89m-pushbutton INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/PushButton/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-r89m-pushbutton INTERFACE
    arduino-compat
)
