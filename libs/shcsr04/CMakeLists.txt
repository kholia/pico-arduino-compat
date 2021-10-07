add_library(pac-shcsr04 INTERFACE)

target_sources(pac-shcsr04 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SHCSR04/SHCSR04.h"
)

target_include_directories(pac-shcsr04 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SHCSR04"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-shcsr04 INTERFACE
    arduino-compat
)
