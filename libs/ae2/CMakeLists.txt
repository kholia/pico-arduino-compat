add_library(ae2 INTERFACE)

target_sources(ae2 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-E2/src/aE2.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-E2/src/aE2.h"
)

target_include_directories(ae2 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Arduino-E2/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(ae2 INTERFACE
    arduino-compat
)
