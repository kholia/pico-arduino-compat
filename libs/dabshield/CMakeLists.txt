add_library(dabshield INTERFACE)

target_sources(dabshield INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/DABShield/src/DABShield.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DABShield/src/DABShield.h"
  "${CMAKE_CURRENT_LIST_DIR}/DABShield/src/Si468xROM.h"
)

target_include_directories(dabshield INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/DABShield/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(dabshield INTERFACE
    arduino-compat
)
