add_library(comdriverspi INTERFACE)

target_sources(comdriverspi INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ComDriverSpi/src/ComDriverSpi.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ComDriverSpi/examples/Test_ComDriverSpi/testComDriverSpi.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ComDriverSpi/src/ComDriverSpi.h"
  "${CMAKE_CURRENT_LIST_DIR}/ComDriverSpi/examples/Test_ComDriverSpi/testComDriverSpi.h"
)

target_include_directories(comdriverspi INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ComDriverSpi/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(comdriverspi INTERFACE
    arduino-compat
)
