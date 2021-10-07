add_library(pac-crt INTERFACE)

target_sources(pac-crt INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/CRT/src/CRT.h"
)

target_include_directories(pac-crt INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/CRT/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-crt INTERFACE
    arduino-compat
)
