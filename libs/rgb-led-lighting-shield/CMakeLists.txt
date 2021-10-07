add_library(pac-rgb-led-lighting-shield INTERFACE)

target_sources(pac-rgb-led-lighting-shield INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/arduino-rgb-led-lighting-shield/src/rgb-led-lighting-shield-ino.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-rgb-led-lighting-shield/src/rgb-led-lighting-shield-pal-i2c-ino.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-rgb-led-lighting-shield/src/rgb-led-lighting-shield.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-rgb-led-lighting-shield/src/rgb-led-lighting-shield-pal-timer.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-rgb-led-lighting-shield/src/rgb-led-lighting-shield-pal-i2c-ino.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-rgb-led-lighting-shield/src/rgb-led-lighting-shield-reg.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-rgb-led-lighting-shield/src/rgb-led-lighting-shield-types.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-rgb-led-lighting-shield/src/rgb-led-lighting-shield.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-rgb-led-lighting-shield/src/rgb-led-lighting-shield-pal-i2c.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-rgb-led-lighting-shield/src/rgb-led-lighting-shield-ino.hpp"
)

target_include_directories(pac-rgb-led-lighting-shield INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/arduino-rgb-led-lighting-shield/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-rgb-led-lighting-shield INTERFACE
    arduino-compat
)
