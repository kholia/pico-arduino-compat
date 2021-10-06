add_library(dfplayermini INTERFACE)

target_sources(dfplayermini INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/DFPlayerMini/DFPlayerMini.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DFPlayerMini/DFPlayerMini.h"
)

target_include_directories(dfplayermini INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/DFPlayerMini"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(dfplayermini INTERFACE
    arduino-compat
)
