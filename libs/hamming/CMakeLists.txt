add_library(hamming INTERFACE)

target_sources(hamming INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Hamming/src/Hamming.h"
)

target_include_directories(hamming INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Hamming/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(hamming INTERFACE
    arduino-compat
)
