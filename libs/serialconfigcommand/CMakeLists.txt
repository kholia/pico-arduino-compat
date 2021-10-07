add_library(pac-serialconfigcommand INTERFACE)

target_sources(pac-serialconfigcommand INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SerialConfigCommand/src/SerialConfigCommand.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SerialConfigCommand/src/SerialConfigCommand.h"
)

target_include_directories(pac-serialconfigcommand INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SerialConfigCommand/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-serialconfigcommand INTERFACE
    arduino-compat
)
