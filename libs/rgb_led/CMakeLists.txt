add_library(rgb_led INTERFACE)

target_sources(rgb_led INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-Libraries/src/RGB_LED.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-Libraries/src/RGB_LED.h"
)

target_include_directories(rgb_led INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Arduino-Libraries/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(rgb_led INTERFACE
    arduino-compat
)
