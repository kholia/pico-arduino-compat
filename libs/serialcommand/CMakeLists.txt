add_library(serialcommand INTERFACE)

target_sources(serialcommand INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SerialCommand/src/SerialCommand.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SerialCommand/src/SerialCommand.h"
)

target_include_directories(serialcommand INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SerialCommand/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(serialcommand INTERFACE
    arduino-compat
)
