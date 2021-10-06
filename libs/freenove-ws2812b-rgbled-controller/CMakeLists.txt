add_library(freenove-ws2812b-rgbled-controller INTERFACE)

target_sources(freenove-ws2812b-rgbled-controller INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Freenove_WS2812B_RGBLED_Controller/src/Freenove_WS2812B_RGBLED_Controller.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Freenove_WS2812B_RGBLED_Controller/src/Freenove_WS2812B_RGBLED_Controller.h"
)

target_include_directories(freenove-ws2812b-rgbled-controller INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Freenove_WS2812B_RGBLED_Controller/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(freenove-ws2812b-rgbled-controller INTERFACE
    arduino-compat
)
