add_library(pac-bluerobotics-ms5837-library INTERFACE)

target_sources(pac-bluerobotics-ms5837-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/BlueRobotics_MS5837_Library/src/MS5837.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/BlueRobotics_MS5837_Library/src/MS5837.h"
)

target_include_directories(pac-bluerobotics-ms5837-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/BlueRobotics_MS5837_Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-bluerobotics-ms5837-library INTERFACE
    arduino-compat
)
