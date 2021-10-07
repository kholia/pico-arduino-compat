add_library(pac-sx150x INTERFACE)

target_sources(pac-sx150x INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-SX150x/src/SX1503.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-SX150x/src/SX1503.h"
)

target_include_directories(pac-sx150x INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Arduino-SX150x/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-sx150x INTERFACE
    arduino-compat
)
