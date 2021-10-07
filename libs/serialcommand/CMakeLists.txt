add_library(pac-serialcommand INTERFACE)

target_sources(pac-serialcommand INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SerialCommand/src/SerialCommand.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SerialCommand/src/SerialCommand.h"
)

target_include_directories(pac-serialcommand INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SerialCommand/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-serialcommand INTERFACE
    arduino-compat
)
