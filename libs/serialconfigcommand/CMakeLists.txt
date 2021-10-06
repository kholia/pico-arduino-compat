add_library(serialconfigcommand INTERFACE)

target_sources(serialconfigcommand INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SerialConfigCommand/src/SerialConfigCommand.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SerialConfigCommand/src/SerialConfigCommand.h"
)

target_include_directories(serialconfigcommand INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SerialConfigCommand/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(serialconfigcommand INTERFACE
    arduino-compat
)
