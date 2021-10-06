add_library(button-arduino INTERFACE)

target_sources(button-arduino INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Button-Arduino/src/Button.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Button-Arduino/src/Button.h"
)

target_include_directories(button-arduino INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Button-Arduino/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(button-arduino INTERFACE
    arduino-compat
)
