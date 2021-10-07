add_library(pac-justwifi INTERFACE)

target_sources(pac-justwifi INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/justwifi/src/JustWifi.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/justwifi/src/JustWifi.h"
)

target_include_directories(pac-justwifi INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/justwifi/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-justwifi INTERFACE
    arduino-compat
)
