add_library(ft817 INTERFACE)

target_sources(ft817 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ft817/src/ft817.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ft817/src/ft817.h"
)

target_include_directories(ft817 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ft817/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(ft817 INTERFACE
    arduino-compat
)
