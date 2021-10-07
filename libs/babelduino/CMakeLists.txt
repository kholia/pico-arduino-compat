add_library(pac-babelduino INTERFACE)

target_sources(pac-babelduino INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Babelduino/src/Babelduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/Babelduino/src/Babelduino_PL.h"
)

target_include_directories(pac-babelduino INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Babelduino/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-babelduino INTERFACE
    arduino-compat
)
