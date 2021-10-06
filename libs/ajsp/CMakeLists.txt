add_library(ajsp INTERFACE)

target_sources(ajsp INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/AJSP/extra/PathListener.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AJSP/extra/main.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AJSP/extra/PathPrinter.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AJSP/extra/VectorCollector.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AJSP/extra/Printer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AJSP/src/PathConstructor.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AJSP/src/MapCollector.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AJSP/src/AJSP.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AJSP/extra/PathPrinter.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/AJSP/extra/VectorCollector.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/AJSP/extra/Printer.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/AJSP/src/PathConstructor.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/AJSP/src/AJSP.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/AJSP/src/MapCollector.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/AJSP/extra/PathListener.h"
)

target_include_directories(ajsp INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/AJSP/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(ajsp INTERFACE
    arduino-compat
)
