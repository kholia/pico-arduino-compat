add_library(pac-artnetwifi INTERFACE)

target_sources(pac-artnetwifi INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ArtnetWifi/src/ArtnetWifi.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArtnetWifi/src/ArtnetWifi.h"
)

target_include_directories(pac-artnetwifi INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ArtnetWifi/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-artnetwifi INTERFACE
    arduino-compat
)
