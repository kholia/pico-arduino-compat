add_library(simpleticker INTERFACE)

target_sources(simpleticker INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Ticker/src/Ticker.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Ticker/doc/Ticker_DoxygenMainPage.h"
  "${CMAKE_CURRENT_LIST_DIR}/Ticker/src/Ticker.h"
)

target_include_directories(simpleticker INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Ticker/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(simpleticker INTERFACE
    arduino-compat
)
