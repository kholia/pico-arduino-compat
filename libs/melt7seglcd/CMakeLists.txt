add_library(melt7seglcd INTERFACE)

target_sources(melt7seglcd INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/melt-7segment-lcd/src/Melt7SegLcd.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/melt-7segment-lcd/src/Melt7SegCharMapper.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/melt-7segment-lcd/src/Melt7SegCharMapper.h"
  "${CMAKE_CURRENT_LIST_DIR}/melt-7segment-lcd/src/Melt7SegLcd.h"
  "${CMAKE_CURRENT_LIST_DIR}/melt-7segment-lcd/src/CharMapper.h"
)

target_include_directories(melt7seglcd INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/melt-7segment-lcd/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(melt7seglcd INTERFACE
    arduino-compat
)
