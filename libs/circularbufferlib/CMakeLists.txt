add_library(circularbufferlib INTERFACE)

target_sources(circularbufferlib INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-CircularBuffer/src/CircularBufferLib.h"
)

target_include_directories(circularbufferlib INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Arduino-CircularBuffer/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(circularbufferlib INTERFACE
    arduino-compat
)
