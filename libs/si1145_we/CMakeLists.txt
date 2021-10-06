add_library(si1145_we INTERFACE)

target_sources(si1145_we INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SI1145_WE/src/SI1145_WE.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SI1145_WE/src/SI1145_WE.h"
)

target_include_directories(si1145_we INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SI1145_WE/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(si1145_we INTERFACE
    arduino-compat
)
