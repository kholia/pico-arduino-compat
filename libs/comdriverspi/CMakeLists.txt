add_library(pac-comdriverspi INTERFACE)

target_sources(pac-comdriverspi INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ComDriverSpi/src/ComDriverSpi.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ComDriverSpi/examples/Test_ComDriverSpi/testComDriverSpi.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ComDriverSpi/src/ComDriverSpi.h"
  "${CMAKE_CURRENT_LIST_DIR}/ComDriverSpi/examples/Test_ComDriverSpi/testComDriverSpi.h"
)

target_include_directories(pac-comdriverspi INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ComDriverSpi/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-comdriverspi INTERFACE
    arduino-compat
)
