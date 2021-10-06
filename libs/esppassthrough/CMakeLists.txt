add_library(esppassthrough INTERFACE)

target_sources(esppassthrough INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ESPpassthrough/ESPpassthrough.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESPpassthrough/ESPpassthrough.h"
)

target_include_directories(esppassthrough INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ESPpassthrough"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(esppassthrough INTERFACE
    arduino-compat
)
