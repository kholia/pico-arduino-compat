add_library(max7219 INTERFACE)

target_sources(max7219 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/max7219/max7219.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/max7219/max7219.h"
)

target_include_directories(max7219 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/max7219"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(max7219 INTERFACE
    arduino-compat
)
