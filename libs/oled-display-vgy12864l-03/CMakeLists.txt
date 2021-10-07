add_library(pac-oled-display-vgy12864l-03 INTERFACE)

target_sources(pac-oled-display-vgy12864l-03 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/OLED_LIB_VGY12864L_03/src/OLED_LIB_VGY12864L_03.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/OLED_LIB_VGY12864L_03/src/OLED_LIB_VGY12864L_03.h"
)

target_include_directories(pac-oled-display-vgy12864l-03 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/OLED_LIB_VGY12864L_03/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-oled-display-vgy12864l-03 INTERFACE
    arduino-compat
)
