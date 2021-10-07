add_library(pac-sdconfig INTERFACE)

target_sources(pac-sdconfig INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SDconfig/src/SDConfig.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SDconfig/src/SDConfig.h"
)

target_include_directories(pac-sdconfig INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SDconfig/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET pac-sd)
    add_subdirectory(../../libs/sd build_pac-sd)
endif()

target_link_libraries(pac-sdconfig INTERFACE
    arduino-compat
    pac-sd
)
