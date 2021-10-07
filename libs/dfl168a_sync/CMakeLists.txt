add_library(pac-dfl168a_sync INTERFACE)

target_sources(pac-dfl168a_sync INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/DFL168A-Sync-Library/src/J1939P.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DFL168A-Sync-Library/src/GPS.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DFL168A-Sync-Library/src/DFL168A.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DFL168A-Sync-Library/src/ISO15765.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DFL168A-Sync-Library/src/J1708.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DFL168A-Sync-Library/src/DFL168A.h"
)

target_include_directories(pac-dfl168a_sync INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/DFL168A-Sync-Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-dfl168a_sync INTERFACE
    arduino-compat
)
