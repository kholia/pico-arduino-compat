add_library(pac-tm1637tinydisplay INTERFACE)

target_sources(pac-tm1637tinydisplay INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TM1637TinyDisplay/TM1637TinyDisplay6.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TM1637TinyDisplay/TM1637TinyDisplay.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TM1637TinyDisplay/TM1637TinyDisplay6.h"
  "${CMAKE_CURRENT_LIST_DIR}/TM1637TinyDisplay/TM1637TinyDisplay.h"
)

target_include_directories(pac-tm1637tinydisplay INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TM1637TinyDisplay"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-tm1637tinydisplay INTERFACE
    arduino-compat
)
