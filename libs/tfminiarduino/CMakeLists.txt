add_library(pac-tfminiarduino INTERFACE)

target_sources(pac-tfminiarduino INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TFmini/TFmini.h"
)

target_include_directories(pac-tfminiarduino INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TFmini"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-tfminiarduino INTERFACE
    arduino-compat
)
