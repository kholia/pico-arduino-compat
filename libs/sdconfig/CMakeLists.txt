add_library(sdconfig INTERFACE)

target_sources(sdconfig INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SDconfig/src/SDConfig.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SDconfig/src/SDConfig.h"
)

target_include_directories(sdconfig INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SDconfig/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET official-sd)
    add_subdirectory(../../official-libs/sd build_official-sd)
endif()

target_link_libraries(sdconfig INTERFACE
    arduino-compat
    official-sd
)
