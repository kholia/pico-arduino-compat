add_library(pac-lcdbargraph INTERFACE)

target_sources(pac-lcdbargraph INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/LcdBarGraph/src/LcdBarGraph.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LcdBarGraph/src/LcdBarGraph.h"
)

target_include_directories(pac-lcdbargraph INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/LcdBarGraph/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET pac-liquidcrystal)
    add_subdirectory(../../libs/liquidcrystal build_pac-liquidcrystal)
endif()

target_link_libraries(pac-lcdbargraph INTERFACE
    arduino-compat
    pac-liquidcrystal
)
