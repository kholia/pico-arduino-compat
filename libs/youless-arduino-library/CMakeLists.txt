add_library(pac-youless-arduino-library INTERFACE)

target_sources(pac-youless-arduino-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Youless-Arduino-lib/src/YoulessMonitor.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Youless-Arduino-lib/src/YoulessMonitor.h"
)

target_include_directories(pac-youless-arduino-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Youless-Arduino-lib/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-youless-arduino-library INTERFACE
    arduino-compat
)
