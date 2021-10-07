add_library(pac-touch-screen-driver INTERFACE)

target_sources(pac-touch-screen-driver INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Touch_Screen_Driver/SeeedTouchScreen.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Touch_Screen_Driver/SeeedTouchScreen.h"
)

target_include_directories(pac-touch-screen-driver INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Touch_Screen_Driver"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-touch-screen-driver INTERFACE
    arduino-compat
)
