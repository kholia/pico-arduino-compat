add_library(pac-wireling INTERFACE)

target_sources(pac-wireling INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TinyCircuits-Wireling-Lib/Wireling.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TinyCircuits-Wireling-Lib/Wireling.h"
)

target_include_directories(pac-wireling INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TinyCircuits-Wireling-Lib"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-wireling INTERFACE
    arduino-compat
)
