add_library(pac-gfx4diod9 INTERFACE)

target_sources(pac-gfx4diod9 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/GFX4DIoD9/src/GFX4dIoD9.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/GFX4DIoD9/src/GFX4dIoD9.h"
)

target_include_directories(pac-gfx4diod9 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/GFX4DIoD9/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET pac-sd)
    add_subdirectory(../../libs/sd build_pac-sd)
endif()

target_link_libraries(pac-gfx4diod9 INTERFACE
    arduino-compat
    pac-sd
)
