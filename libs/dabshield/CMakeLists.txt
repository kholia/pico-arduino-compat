add_library(pac-dabshield INTERFACE)

target_sources(pac-dabshield INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/DABShield/src/DABShield.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DABShield/src/DABShield.h"
  "${CMAKE_CURRENT_LIST_DIR}/DABShield/src/Si468xROM.h"
)

target_include_directories(pac-dabshield INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/DABShield/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-dabshield INTERFACE
    arduino-compat
)
