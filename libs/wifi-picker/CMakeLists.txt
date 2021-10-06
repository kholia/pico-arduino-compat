add_library(wifi-picker INTERFACE)

target_sources(wifi-picker INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/WiFiPicker/src/WiFiPicker.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/WiFiPicker/src/WiFiPicker.h"
)

target_include_directories(wifi-picker INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/WiFiPicker/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(wifi-picker INTERFACE
    arduino-compat
)
