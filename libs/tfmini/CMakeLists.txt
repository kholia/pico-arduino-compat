add_library(tfmini INTERFACE)

target_sources(tfmini INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/tfmini/src/TFMini.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/tfmini/src/TFMini.h"
)

target_include_directories(tfmini INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/tfmini/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(tfmini INTERFACE
    arduino-compat
)
