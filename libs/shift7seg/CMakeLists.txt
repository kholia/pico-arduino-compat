add_library(shift7seg INTERFACE)

target_sources(shift7seg INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/shift7seg/src/shift7seg.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/shift7seg/src/shift7seg.h"
)

target_include_directories(shift7seg INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/shift7seg/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(shift7seg INTERFACE
    arduino-compat
)
