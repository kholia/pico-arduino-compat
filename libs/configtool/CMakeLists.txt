add_library(pac-configtool INTERFACE)

target_sources(pac-configtool INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ConfigTool/src/ConfigTool.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ConfigTool/src/ConfigTool.h"
)

target_include_directories(pac-configtool INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ConfigTool/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-configtool INTERFACE
    arduino-compat
)
