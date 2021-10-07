add_library(pac-tcs34725autogain INTERFACE)

target_sources(pac-tcs34725autogain INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TCS34725AutoGain/TCS34725AutoGain.h"
)

target_include_directories(pac-tcs34725autogain INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TCS34725AutoGain"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-tcs34725autogain INTERFACE
    arduino-compat
)
