add_library(ss_oled INTERFACE)

target_sources(ss_oled INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ss_oled/src/ss_oled.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ss_oled/linux/ss_oled.c"
  "${CMAKE_CURRENT_LIST_DIR}/ss_oled/linux/multi_oled.c"
  "${CMAKE_CURRENT_LIST_DIR}/ss_oled/linux/sample.c"
  "${CMAKE_CURRENT_LIST_DIR}/ss_oled/linux/speed_test.c"
  "${CMAKE_CURRENT_LIST_DIR}/ss_oled/src/ss_oled.h"
)

target_include_directories(ss_oled INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ss_oled/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(ss_oled INTERFACE
    arduino-compat
)
