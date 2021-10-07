add_library(pac-plugpiblack INTERFACE)

target_sources(pac-plugpiblack INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/PlugPiBlack/src/PlugPiBlack.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/PlugPiBlack/src/PlugPiBlack.h"
)

target_include_directories(pac-plugpiblack INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/PlugPiBlack/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-plugpiblack INTERFACE
    arduino-compat
)
