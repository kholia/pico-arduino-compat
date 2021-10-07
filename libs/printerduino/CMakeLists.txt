add_library(pac-printerduino INTERFACE)

target_sources(pac-printerduino INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/bbPrinter/src/bbPrinter.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/bbPrinter/src/bbPrinter.h"
)

target_include_directories(pac-printerduino INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/bbPrinter/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-printerduino INTERFACE
    arduino-compat
)
