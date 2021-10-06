add_library(babelduino INTERFACE)

target_sources(babelduino INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Babelduino/src/Babelduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/Babelduino/src/Babelduino_PL.h"
)

target_include_directories(babelduino INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Babelduino/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(babelduino INTERFACE
    arduino-compat
)
