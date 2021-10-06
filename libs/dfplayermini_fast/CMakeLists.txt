add_library(dfplayermini_fast INTERFACE)

target_sources(dfplayermini_fast INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/DFPlayerMini_Fast/src/DFPlayerMini_Fast.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DFPlayerMini_Fast/src/DFPlayerMini_Fast.h"
)

target_include_directories(dfplayermini_fast INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/DFPlayerMini_Fast/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(dfplayermini_fast INTERFACE
    arduino-compat
)
