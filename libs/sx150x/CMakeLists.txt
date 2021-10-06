add_library(sx150x INTERFACE)

target_sources(sx150x INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-SX150x/src/SX1503.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-SX150x/src/SX1503.h"
)

target_include_directories(sx150x INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Arduino-SX150x/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(sx150x INTERFACE
    arduino-compat
)
