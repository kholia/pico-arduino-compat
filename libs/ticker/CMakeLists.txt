add_library(pac-ticker INTERFACE)

target_sources(pac-ticker INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Ticker/Ticker.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Ticker/Ticker.h"
)

target_include_directories(pac-ticker INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Ticker"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-ticker INTERFACE
    arduino-compat
)
