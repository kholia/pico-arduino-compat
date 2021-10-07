add_library(pac-leddisplay INTERFACE)

target_sources(pac-leddisplay INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/LedDisplay/LedDisplay.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LedDisplay/font5x7.h"
  "${CMAKE_CURRENT_LIST_DIR}/LedDisplay/LedDisplay.h"
)

target_include_directories(pac-leddisplay INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/LedDisplay"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-leddisplay INTERFACE
    arduino-compat
)
