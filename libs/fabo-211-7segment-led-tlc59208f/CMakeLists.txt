add_library(pac-fabo-211-7segment-led-tlc59208f INTERFACE)

target_sources(pac-fabo-211-7segment-led-tlc59208f INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/FaBo7Seg-TLC59208-Library/src/FaBo7Seg_TLC59208.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FaBo7Seg-TLC59208-Library/src/FaBo7Seg_TLC59208.h"
)

target_include_directories(pac-fabo-211-7segment-led-tlc59208f INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/FaBo7Seg-TLC59208-Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-fabo-211-7segment-led-tlc59208f INTERFACE
    arduino-compat
)
