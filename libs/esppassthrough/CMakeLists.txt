add_library(pac-esppassthrough INTERFACE)

target_sources(pac-esppassthrough INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ESPpassthrough/ESPpassthrough.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESPpassthrough/ESPpassthrough.h"
)

target_include_directories(pac-esppassthrough INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ESPpassthrough"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-esppassthrough INTERFACE
    arduino-compat
)
