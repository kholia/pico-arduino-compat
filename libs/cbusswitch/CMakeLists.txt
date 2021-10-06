add_library(cbusswitch INTERFACE)

target_sources(cbusswitch INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/CBUSswitch/src/CBUSswitch.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/CBUSswitch/src/CBUSswitch.h"
)

target_include_directories(cbusswitch INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/CBUSswitch/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(cbusswitch INTERFACE
    arduino-compat
)
