add_library(ledblinky INTERFACE)

target_sources(ledblinky INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/LedBlinky/src/LedBlinky.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LedBlinky/src/LedBlinky.h"
)

target_include_directories(ledblinky INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/LedBlinky/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(ledblinky INTERFACE
    arduino-compat
)
