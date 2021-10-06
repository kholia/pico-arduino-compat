add_library(flash INTERFACE)

target_sources(flash INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Flash/src/Flash.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Flash/src/Flash.h"
)

target_include_directories(flash INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Flash/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(flash INTERFACE
    arduino-compat
)
