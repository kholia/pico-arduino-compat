add_library(pac-tfmini INTERFACE)

target_sources(pac-tfmini INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/tfmini/src/TFMini.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/tfmini/src/TFMini.h"
)

target_include_directories(pac-tfmini INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/tfmini/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-tfmini INTERFACE
    arduino-compat
)
