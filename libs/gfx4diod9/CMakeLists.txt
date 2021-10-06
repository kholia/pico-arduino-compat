add_library(gfx4diod9 INTERFACE)

target_sources(gfx4diod9 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/GFX4DIoD9/src/GFX4dIoD9.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/GFX4DIoD9/src/GFX4dIoD9.h"
)

target_include_directories(gfx4diod9 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/GFX4DIoD9/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET official-sd)
    add_subdirectory(../../official-libs/sd build_official-sd)
endif()

target_link_libraries(gfx4diod9 INTERFACE
    arduino-compat
    official-sd
)
