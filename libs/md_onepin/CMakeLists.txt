add_library(pac-md_onepin INTERFACE)

target_sources(pac-md_onepin INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MD_OnePin/src/MD_OnePin.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MD_OnePin/src/MD_OnePin_Protocol.h"
  "${CMAKE_CURRENT_LIST_DIR}/MD_OnePin/src/MD_OnePin.h"
)

target_include_directories(pac-md_onepin INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MD_OnePin/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-md_onepin INTERFACE
    arduino-compat
)
