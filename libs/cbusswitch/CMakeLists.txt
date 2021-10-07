add_library(pac-cbusswitch INTERFACE)

target_sources(pac-cbusswitch INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/CBUSswitch/src/CBUSswitch.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/CBUSswitch/src/CBUSswitch.h"
)

target_include_directories(pac-cbusswitch INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/CBUSswitch/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-cbusswitch INTERFACE
    arduino-compat
)
