add_library(pac-umuxoutputlib INTERFACE)

target_sources(pac-umuxoutputlib INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/uMuxOutputLib/src/uMuxOutputLib.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/uMuxOutputLib/src/uMuxOutputLib.h"
)

target_include_directories(pac-umuxoutputlib INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/uMuxOutputLib/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-umuxoutputlib INTERFACE
    arduino-compat
)
