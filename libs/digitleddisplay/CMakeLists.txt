add_library(digitleddisplay INTERFACE)

target_sources(digitleddisplay INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/DigitLedDisplay/src/DigitLedDisplay.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DigitLedDisplay/src/DigitLedDisplay.h"
)

target_include_directories(digitleddisplay INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/DigitLedDisplay/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(digitleddisplay INTERFACE
    arduino-compat
)
