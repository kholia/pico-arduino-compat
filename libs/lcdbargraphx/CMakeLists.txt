add_library(pac-lcdbargraphx INTERFACE)

target_sources(pac-lcdbargraphx INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/LcdBarGraphX/src/LcdBarGraphX.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LcdBarGraphX/src/LcdBarGraphX.h"
)

target_include_directories(pac-lcdbargraphx INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/LcdBarGraphX/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-lcdbargraphx INTERFACE
    arduino-compat
)
