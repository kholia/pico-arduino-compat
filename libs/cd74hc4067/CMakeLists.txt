add_library(pac-cd74hc4067 INTERFACE)

target_sources(pac-cd74hc4067 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/CD74HC4067/src/CD74HC4067.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/CD74HC4067/src/CD74HC4067.h"
)

target_include_directories(pac-cd74hc4067 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/CD74HC4067/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-cd74hc4067 INTERFACE
    arduino-compat
)
