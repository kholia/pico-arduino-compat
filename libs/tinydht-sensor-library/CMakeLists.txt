add_library(tinydht-sensor-library INTERFACE)

target_sources(tinydht-sensor-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TinyDHT/TinyDHT.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TinyDHT/TinyDHT.h"
)

target_include_directories(tinydht-sensor-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TinyDHT"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(tinydht-sensor-library INTERFACE
    arduino-compat
)
