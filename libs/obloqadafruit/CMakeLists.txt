add_library(pac-obloqadafruit INTERFACE)

target_sources(pac-obloqadafruit INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ObloqAdafruit/src/ObloqAdafruit.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ObloqAdafruit/src/ObloqAdafruit.h"
)

target_include_directories(pac-obloqadafruit INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ObloqAdafruit/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-obloqadafruit INTERFACE
    arduino-compat
)
