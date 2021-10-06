add_library(basicglcd INTERFACE)

target_sources(basicglcd INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/GLCD_QY_12864BG/src/basicGLCD.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/GLCD_QY_12864BG/src/charList.h"
  "${CMAKE_CURRENT_LIST_DIR}/GLCD_QY_12864BG/src/basicGLCD.h"
)

target_include_directories(basicglcd INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/GLCD_QY_12864BG/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(basicglcd INTERFACE
    arduino-compat
)
