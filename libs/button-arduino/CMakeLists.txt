add_library(pac-button-arduino INTERFACE)

target_sources(pac-button-arduino INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Button-Arduino/src/Button.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Button-Arduino/src/Button.h"
)

target_include_directories(pac-button-arduino INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Button-Arduino/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-button-arduino INTERFACE
    arduino-compat
)
