add_library(pac-ardvoice INTERFACE)

target_sources(pac-ardvoice INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ArdVoice/src/ArdVoice.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArdVoice/src/ArdVoice.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArdVoice/examples/Sample2-Complex/bitmaps.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArdVoice/examples/Sample2-Complex/voices.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArdVoice/examples/Sample1-Basic/voices.h"
)

target_include_directories(pac-ardvoice INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ArdVoice/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-ardvoice INTERFACE
    arduino-compat
)
