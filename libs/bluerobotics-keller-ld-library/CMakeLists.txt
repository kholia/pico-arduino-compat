add_library(bluerobotics-keller-ld-library INTERFACE)

target_sources(bluerobotics-keller-ld-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/BlueRobotics_KellerLD_Library/KellerLD.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/BlueRobotics_KellerLD_Library/KellerLD.h"
)

target_include_directories(bluerobotics-keller-ld-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/BlueRobotics_KellerLD_Library"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(bluerobotics-keller-ld-library INTERFACE
    arduino-compat
)
