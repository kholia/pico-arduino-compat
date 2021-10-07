add_library(pac-basicglcd INTERFACE)

target_sources(pac-basicglcd INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/GLCD_QY_12864BG/src/basicGLCD.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/GLCD_QY_12864BG/src/charList.h"
  "${CMAKE_CURRENT_LIST_DIR}/GLCD_QY_12864BG/src/basicGLCD.h"
)

target_include_directories(pac-basicglcd INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/GLCD_QY_12864BG/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-basicglcd INTERFACE
    arduino-compat
)
