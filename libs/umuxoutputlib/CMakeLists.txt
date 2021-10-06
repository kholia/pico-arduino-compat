add_library(umuxoutputlib INTERFACE)

target_sources(umuxoutputlib INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/uMuxOutputLib/src/uMuxOutputLib.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/uMuxOutputLib/src/uMuxOutputLib.h"
)

target_include_directories(umuxoutputlib INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/uMuxOutputLib/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(umuxoutputlib INTERFACE
    arduino-compat
)
