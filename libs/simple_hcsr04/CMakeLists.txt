add_library(pac-simple_hcsr04 INTERFACE)

target_sources(pac-simple_hcsr04 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Simple_HCSR04/src/Simple_HCSR04.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Simple_HCSR04/src/Simple_HCSR04.h"
)

target_include_directories(pac-simple_hcsr04 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Simple_HCSR04/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-simple_hcsr04 INTERFACE
    arduino-compat
)
