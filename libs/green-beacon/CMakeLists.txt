add_library(pac-green-beacon INTERFACE)

target_sources(pac-green-beacon INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/green-beacon-esp32/src/GreenBeacon.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/green-beacon-esp32/src/GreenBeacon.h"
)

target_include_directories(pac-green-beacon INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/green-beacon-esp32/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-green-beacon INTERFACE
    arduino-compat
)
