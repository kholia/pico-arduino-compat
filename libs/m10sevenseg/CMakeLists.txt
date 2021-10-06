add_library(m10sevenseg INTERFACE)

target_sources(m10sevenseg INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/M10SevenSeg/src/M10SevenSeg.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/M10SevenSeg/src/M10SevenSeg.h"
)

target_include_directories(m10sevenseg INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/M10SevenSeg/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(m10sevenseg INTERFACE
    arduino-compat
)
