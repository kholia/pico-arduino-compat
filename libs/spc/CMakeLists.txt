add_library(pac-spc INTERFACE)

target_sources(pac-spc INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SPC-Library/src/SPC.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SPC-Library/src/SPC.h"
)

target_include_directories(pac-spc INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SPC-Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-spc INTERFACE
    arduino-compat
)
