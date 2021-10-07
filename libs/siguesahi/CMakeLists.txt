add_library(pac-siguesahi INTERFACE)

target_sources(pac-siguesahi INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SiguesAhi/src/OutputPrinter.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SiguesAhi/src/SiguesAhi.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SiguesAhi/src/OutputScreen.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SiguesAhi/src/SiguesAhi.h"
  "${CMAKE_CURRENT_LIST_DIR}/SiguesAhi/src/Output.h"
  "${CMAKE_CURRENT_LIST_DIR}/SiguesAhi/src/OutputPrinter.h"
  "${CMAKE_CURRENT_LIST_DIR}/SiguesAhi/src/OutputScreen.h"
)

target_include_directories(pac-siguesahi INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SiguesAhi/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET pac-adafruit-gfx-library)
    add_subdirectory(../../libs/adafruit-gfx-library build_pac-adafruit-gfx-library)
endif()

target_link_libraries(pac-siguesahi INTERFACE
    arduino-compat
    pac-adafruit-gfx-library
)
