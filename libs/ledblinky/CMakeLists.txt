add_library(pac-ledblinky INTERFACE)

target_sources(pac-ledblinky INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/LedBlinky/src/LedBlinky.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LedBlinky/src/LedBlinky.h"
)

target_include_directories(pac-ledblinky INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/LedBlinky/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-ledblinky INTERFACE
    arduino-compat
)
