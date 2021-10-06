add_library(hcsr04 INTERFACE)

target_sources(hcsr04 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/arduino-lib-hc-sr04/src/HCSR04.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-lib-hc-sr04/src/HCSR04.h"
)

target_include_directories(hcsr04 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/arduino-lib-hc-sr04/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(hcsr04 INTERFACE
    arduino-compat
)
