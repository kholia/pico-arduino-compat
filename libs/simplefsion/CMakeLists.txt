add_library(pac-simplefsion INTERFACE)

target_sources(pac-simplefsion INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SimpleFusion/src/simpleFusion.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SimpleFusion/src/simpleFusion.h"
)

target_include_directories(pac-simplefsion INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SimpleFusion/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-simplefsion INTERFACE
    arduino-compat
)
