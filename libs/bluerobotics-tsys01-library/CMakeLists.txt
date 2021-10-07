add_library(pac-bluerobotics-tsys01-library INTERFACE)

target_sources(pac-bluerobotics-tsys01-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/BlueRobotics_TSYS01_Library/TSYS01.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/BlueRobotics_TSYS01_Library/TSYS01.h"
)

target_include_directories(pac-bluerobotics-tsys01-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/BlueRobotics_TSYS01_Library"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-bluerobotics-tsys01-library INTERFACE
    arduino-compat
)
