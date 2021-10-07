add_library(pac-m10sevenseg INTERFACE)

target_sources(pac-m10sevenseg INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/M10SevenSeg/src/M10SevenSeg.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/M10SevenSeg/src/M10SevenSeg.h"
)

target_include_directories(pac-m10sevenseg INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/M10SevenSeg/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-m10sevenseg INTERFACE
    arduino-compat
)
