add_library(pac-smartdial INTERFACE)

target_sources(pac-smartdial INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SmartDial/SmartDial.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SmartDial/SmartDial.h"
)

target_include_directories(pac-smartdial INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SmartDial"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-smartdial INTERFACE
    arduino-compat
)
