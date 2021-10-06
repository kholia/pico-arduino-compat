add_library(tcs34725 INTERFACE)

target_sources(tcs34725 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TCS34725/TCS34725.h"
)

target_include_directories(tcs34725 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TCS34725"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(tcs34725 INTERFACE
    arduino-compat
)
