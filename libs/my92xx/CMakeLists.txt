add_library(pac-my92xx INTERFACE)

target_sources(pac-my92xx INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/my92xx/src/my92xx.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/my92xx/src/my92xx.h"
  "${CMAKE_CURRENT_LIST_DIR}/my92xx/examples/esp8285_rainbow/credentials.sample.h"
)

target_include_directories(pac-my92xx INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/my92xx/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-my92xx INTERFACE
    arduino-compat
)
