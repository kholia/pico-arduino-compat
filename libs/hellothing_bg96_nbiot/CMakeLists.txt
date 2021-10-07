add_library(pac-hellothing_bg96_nbiot INTERFACE)

target_sources(pac-hellothing_bg96_nbiot INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/hellothing_NBIoT_Arduino_Shield/src/hellothing_BG96_NBIoT.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/hellothing_NBIoT_Arduino_Shield/src/hellothing_BG96_NBIoT.h"
  "${CMAKE_CURRENT_LIST_DIR}/hellothing_NBIoT_Arduino_Shield/src/BG96_at_definitions.h"
)

target_include_directories(pac-hellothing_bg96_nbiot INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/hellothing_NBIoT_Arduino_Shield/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-hellothing_bg96_nbiot INTERFACE
    arduino-compat
)
