add_library(tfl-status INTERFACE)

target_sources(tfl-status INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TFL-Status/src/TFLStatus.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TFL-Status/src/TFLStatus.h"
)

target_include_directories(tfl-status INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TFL-Status/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(tfl-status INTERFACE
    arduino-compat
)
