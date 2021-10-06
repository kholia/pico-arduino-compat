add_library(bluerobotics-tsys01-library INTERFACE)

target_sources(bluerobotics-tsys01-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/BlueRobotics_TSYS01_Library/TSYS01.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/BlueRobotics_TSYS01_Library/TSYS01.h"
)

target_include_directories(bluerobotics-tsys01-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/BlueRobotics_TSYS01_Library"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(bluerobotics-tsys01-library INTERFACE
    arduino-compat
)
