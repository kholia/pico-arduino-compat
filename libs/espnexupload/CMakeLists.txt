add_library(pac-espnexupload INTERFACE)

target_sources(pac-espnexupload INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ESPNexUpload/src/ESPNexUpload.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESPNexUpload/src/ESPNexUpload.h"
)

target_include_directories(pac-espnexupload INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ESPNexUpload/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-espnexupload INTERFACE
    arduino-compat
)
