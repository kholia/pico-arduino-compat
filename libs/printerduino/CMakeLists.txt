add_library(printerduino INTERFACE)

target_sources(printerduino INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/bbPrinter/src/bbPrinter.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/bbPrinter/src/bbPrinter.h"
)

target_include_directories(printerduino INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/bbPrinter/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(printerduino INTERFACE
    arduino-compat
)
