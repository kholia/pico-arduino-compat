add_library(lcdbargraph INTERFACE)

target_sources(lcdbargraph INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/LcdBarGraph/src/LcdBarGraph.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LcdBarGraph/src/LcdBarGraph.h"
)

target_include_directories(lcdbargraph INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/LcdBarGraph/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET official-liquid-crystal)
    add_subdirectory(../../official-libs/liquid-crystal build_official-liquid-crystal)
endif()

target_link_libraries(lcdbargraph INTERFACE
    arduino-compat
    official-liquid-crystal
)
