add_library(pac-simpleticker INTERFACE)

target_sources(pac-simpleticker INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Ticker/src/Ticker.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Ticker/doc/Ticker_DoxygenMainPage.h"
  "${CMAKE_CURRENT_LIST_DIR}/Ticker/src/Ticker.h"
)

target_include_directories(pac-simpleticker INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Ticker/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-simpleticker INTERFACE
    arduino-compat
)
