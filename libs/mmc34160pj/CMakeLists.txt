add_library(pac-mmc34160pj INTERFACE)

target_sources(pac-mmc34160pj INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MMC34160PJ/src/MMC34160PJ.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MMC34160PJ/src/MMC34160PJ.h"
)

target_include_directories(pac-mmc34160pj INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MMC34160PJ/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-mmc34160pj INTERFACE
    arduino-compat
)
