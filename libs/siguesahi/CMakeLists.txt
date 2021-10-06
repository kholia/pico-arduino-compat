add_library(siguesahi INTERFACE)

target_sources(siguesahi INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SiguesAhi/src/OutputPrinter.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SiguesAhi/src/SiguesAhi.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SiguesAhi/src/OutputScreen.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SiguesAhi/src/SiguesAhi.h"
  "${CMAKE_CURRENT_LIST_DIR}/SiguesAhi/src/Output.h"
  "${CMAKE_CURRENT_LIST_DIR}/SiguesAhi/src/OutputPrinter.h"
  "${CMAKE_CURRENT_LIST_DIR}/SiguesAhi/src/OutputScreen.h"
)

target_include_directories(siguesahi INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SiguesAhi/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET adafruit-gfx-library)
    add_subdirectory(../../libs/adafruit-gfx-library build_adafruit-gfx-library)
endif()

target_link_libraries(siguesahi INTERFACE
    arduino-compat
    adafruit-gfx-library
)
