add_library(pac-circularbufferlib INTERFACE)

target_sources(pac-circularbufferlib INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-CircularBuffer/src/CircularBufferLib.h"
)

target_include_directories(pac-circularbufferlib INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Arduino-CircularBuffer/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-circularbufferlib INTERFACE
    arduino-compat
)
