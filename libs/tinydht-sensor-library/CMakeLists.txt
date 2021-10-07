add_library(pac-tinydht-sensor-library INTERFACE)

target_sources(pac-tinydht-sensor-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TinyDHT/TinyDHT.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TinyDHT/TinyDHT.h"
)

target_include_directories(pac-tinydht-sensor-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TinyDHT"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-tinydht-sensor-library INTERFACE
    arduino-compat
)
