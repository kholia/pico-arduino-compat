add_library(m10examples INTERFACE)

target_sources(m10examples INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/M10Examples/src/M10Examples.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/M10Examples/src/M10Examples.h"
)

target_include_directories(m10examples INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/M10Examples/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(m10examples INTERFACE
    arduino-compat
)
