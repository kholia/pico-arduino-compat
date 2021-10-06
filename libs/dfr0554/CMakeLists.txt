add_library(dfr0554 INTERFACE)

target_sources(dfr0554 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-DFR0554/src/DFR0554.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-DFR0554/src/DFR0554.h"
)

target_include_directories(dfr0554 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Arduino-DFR0554/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(dfr0554 INTERFACE
    arduino-compat
)
