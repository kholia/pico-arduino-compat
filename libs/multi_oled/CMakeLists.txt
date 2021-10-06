add_library(multi_oled INTERFACE)

target_sources(multi_oled INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Multi_OLED/src/Multi_OLED.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Multi_OLED/src/Multi_OLED.h"
)

target_include_directories(multi_oled INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Multi_OLED/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(multi_oled INTERFACE
    arduino-compat
)
