add_library(svgparser INTERFACE)

target_sources(svgparser INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SvgParser/SvgParser.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SvgParser/test/test.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SvgParser/SvgParser.h"
  "${CMAKE_CURRENT_LIST_DIR}/SvgParser/SvgOutput_TFT_eSPI.h"
)

target_include_directories(svgparser INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SvgParser"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(svgparser INTERFACE
    arduino-compat
)
