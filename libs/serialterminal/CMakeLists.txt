add_library(pac-serialterminal INTERFACE)

target_sources(pac-serialterminal INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SerialTerminal/src/SerialTerminal.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SerialTerminal/src/SerialTermClass.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SerialTerminal/src/SerialTerminal.h"
  "${CMAKE_CURRENT_LIST_DIR}/SerialTerminal/src/SerialTermClass.h"
)

target_include_directories(pac-serialterminal INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SerialTerminal/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-serialterminal INTERFACE
    arduino-compat
)
