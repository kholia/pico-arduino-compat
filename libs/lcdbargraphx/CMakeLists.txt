add_library(lcdbargraphx INTERFACE)

target_sources(lcdbargraphx INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/LcdBarGraphX/src/LcdBarGraphX.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LcdBarGraphX/src/LcdBarGraphX.h"
)

target_include_directories(lcdbargraphx INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/LcdBarGraphX/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(lcdbargraphx INTERFACE
    arduino-compat
)
