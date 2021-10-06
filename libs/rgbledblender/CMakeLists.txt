add_library(rgbledblender INTERFACE)

target_sources(rgbledblender INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/RGBLEDBlender/src/RGBLEDBlender.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RGBLEDBlender/src/RGBLEDBlender.h"
  "${CMAKE_CURRENT_LIST_DIR}/RGBLEDBlender/src/Color/Color.h"
  "${CMAKE_CURRENT_LIST_DIR}/RGBLEDBlender/src/Colors/Colors.h"
  "${CMAKE_CURRENT_LIST_DIR}/RGBLEDBlender/src/RGBLED/RGBLED.h"
)

target_include_directories(rgbledblender INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/RGBLEDBlender/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(rgbledblender INTERFACE
    arduino-compat
)
