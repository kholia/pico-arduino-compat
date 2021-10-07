add_library(pac-teensy_3x_multipurpose_board INTERFACE)

target_sources(pac-teensy_3x_multipurpose_board INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Teensy_3X_Multipurpose_Board/src/Teensy_3X_Multipurpose_Board.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Teensy_3X_Multipurpose_Board/src/Teensy_3X_Multipurpose_Board.h"
)

target_include_directories(pac-teensy_3x_multipurpose_board INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Teensy_3X_Multipurpose_Board/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-teensy_3x_multipurpose_board INTERFACE
    arduino-compat
)
