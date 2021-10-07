add_library(pac-senses_wifi INTERFACE)

target_sources(pac-senses_wifi INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Senses_wifi/src/Senses_wifi.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Senses_wifi/src/Senses_wifi.h"
)

target_include_directories(pac-senses_wifi INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Senses_wifi/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-senses_wifi INTERFACE
    arduino-compat
)
