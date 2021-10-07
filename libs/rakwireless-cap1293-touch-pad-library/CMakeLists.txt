add_library(pac-rakwireless-cap1293-touch-pad-library INTERFACE)

target_sources(pac-rakwireless-cap1293-touch-pad-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/RAK14002-CAP1293-Library/src/CAP1293.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RAK14002-CAP1293-Library/src/CAP1293.h"
  "${CMAKE_CURRENT_LIST_DIR}/RAK14002-CAP1293-Library/src/CAP1293_Registers.h"
)

target_include_directories(pac-rakwireless-cap1293-touch-pad-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/RAK14002-CAP1293-Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-rakwireless-cap1293-touch-pad-library INTERFACE
    arduino-compat
)
