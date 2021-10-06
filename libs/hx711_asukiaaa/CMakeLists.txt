add_library(hx711_asukiaaa INTERFACE)

target_sources(hx711_asukiaaa INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/arduino-HX711/src/HX711_asukiaaa.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-HX711/src/HX711_asukiaaa.h"
)

target_include_directories(hx711_asukiaaa INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/arduino-HX711/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(hx711_asukiaaa INTERFACE
    arduino-compat
)
