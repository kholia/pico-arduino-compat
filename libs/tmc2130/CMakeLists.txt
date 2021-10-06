add_library(tmc2130 INTERFACE)

target_sources(tmc2130 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TMC2130/src/TMC2130.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TMC2130/src/TMC2130.h"
)

target_include_directories(tmc2130 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TMC2130/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(tmc2130 INTERFACE
    arduino-compat
)
