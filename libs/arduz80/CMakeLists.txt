add_library(pac-arduz80 INTERFACE)

target_sources(pac-arduz80 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ArduZ80/ArduZ80.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduZ80/ArduZ80.h"
)

target_include_directories(pac-arduz80 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ArduZ80"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-arduz80 INTERFACE
    arduino-compat
)
