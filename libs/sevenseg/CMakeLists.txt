add_library(pac-sevenseg INTERFACE)

target_sources(pac-sevenseg INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SevenSeg/SevenSeg.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SevenSeg/SevenSeg.h"
)

target_include_directories(pac-sevenseg INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SevenSeg"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-sevenseg INTERFACE
    arduino-compat
)
