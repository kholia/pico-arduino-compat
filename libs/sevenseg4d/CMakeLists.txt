add_library(pac-sevenseg4d INTERFACE)

target_sources(pac-sevenseg4d INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SevenSeg4D/SevenSeg4D.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SevenSeg4D/SevenSeg4D.h"
)

target_include_directories(pac-sevenseg4d INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SevenSeg4D"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-sevenseg4d INTERFACE
    arduino-compat
)
