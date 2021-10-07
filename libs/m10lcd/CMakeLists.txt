add_library(pac-m10lcd INTERFACE)

target_sources(pac-m10lcd INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/M10LCD/src/M10LCD.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/M10LCD/src/M10LCD.h"
)

target_include_directories(pac-m10lcd INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/M10LCD/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-m10lcd INTERFACE
    arduino-compat
)
