add_library(m10lcd INTERFACE)

target_sources(m10lcd INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/M10LCD/src/M10LCD.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/M10LCD/src/M10LCD.h"
)

target_include_directories(m10lcd INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/M10LCD/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(m10lcd INTERFACE
    arduino-compat
)
