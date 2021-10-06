add_library(tfminiarduino INTERFACE)

target_sources(tfminiarduino INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TFmini/TFmini.h"
)

target_include_directories(tfminiarduino INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TFmini"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(tfminiarduino INTERFACE
    arduino-compat
)
