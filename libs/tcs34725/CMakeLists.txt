add_library(pac-tcs34725 INTERFACE)

target_sources(pac-tcs34725 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TCS34725/TCS34725.h"
)

target_include_directories(pac-tcs34725 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TCS34725"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-tcs34725 INTERFACE
    arduino-compat
)
