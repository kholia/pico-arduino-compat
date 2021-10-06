add_library(esp32logger INTERFACE)

target_sources(esp32logger INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ESP32Logger/src/ESP32Logger.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32Logger/src/ESP32Logger.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32Logger/examples/individual_defs.h"
)

target_include_directories(esp32logger INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ESP32Logger/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(esp32logger INTERFACE
    arduino-compat
)
