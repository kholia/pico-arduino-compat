add_library(pac-wm8978-esp32 INTERFACE)

target_sources(pac-wm8978-esp32 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/wm8978-esp32/src/WM8978.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/wm8978-esp32/src/WM8978.h"
)

target_include_directories(pac-wm8978-esp32 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/wm8978-esp32/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-wm8978-esp32 INTERFACE
    arduino-compat
)
