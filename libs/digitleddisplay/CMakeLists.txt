add_library(pac-digitleddisplay INTERFACE)

target_sources(pac-digitleddisplay INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/DigitLedDisplay/src/DigitLedDisplay.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DigitLedDisplay/src/DigitLedDisplay.h"
)

target_include_directories(pac-digitleddisplay INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/DigitLedDisplay/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-digitleddisplay INTERFACE
    arduino-compat
)
