add_library(pac-l3g INTERFACE)

target_sources(pac-l3g INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/l3g-arduino/L3G.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/l3g-arduino/L3G.h"
)

target_include_directories(pac-l3g INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/l3g-arduino"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-l3g INTERFACE
    arduino-compat
)
