add_library(rgb INTERFACE)

target_sources(rgb INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/RGBLed/src/RGBLed.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RGBLed/src/RGBLed.h"
)

target_include_directories(rgb INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/RGBLed/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(rgb INTERFACE
    arduino-compat
)
