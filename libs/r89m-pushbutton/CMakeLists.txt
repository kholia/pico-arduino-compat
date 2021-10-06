add_library(r89m-pushbutton INTERFACE)

target_sources(r89m-pushbutton INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/PushButton/src/PushButton/PushButton.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/PushButton/src/PushButton.h"
)

target_include_directories(r89m-pushbutton INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/PushButton/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(r89m-pushbutton INTERFACE
    arduino-compat
)
