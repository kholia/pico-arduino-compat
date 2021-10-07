add_library(pac-buttondebounce INTERFACE)

target_sources(pac-buttondebounce INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ButtonDebounce/src/ButtonDebounce.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ButtonDebounce/src/ButtonDebounce.h"
)

target_include_directories(pac-buttondebounce INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ButtonDebounce/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-buttondebounce INTERFACE
    arduino-compat
)
