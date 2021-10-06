add_library(digitled72xx INTERFACE)

target_sources(digitled72xx INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/DigitLed72xx/src/DigitLed72xx.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DigitLed72xx/src/DigitLed72xx.h"
)

target_include_directories(digitled72xx INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/DigitLed72xx/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(digitled72xx INTERFACE
    arduino-compat
)
