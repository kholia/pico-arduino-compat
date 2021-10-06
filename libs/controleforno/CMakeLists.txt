add_library(controleforno INTERFACE)

target_sources(controleforno INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/controleForno/src/ControleForno.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/controleForno/src/ControleForno.h"
)

target_include_directories(controleforno INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/controleForno/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(controleforno INTERFACE
    arduino-compat
)
