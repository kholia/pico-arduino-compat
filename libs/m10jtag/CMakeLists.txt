add_library(m10jtag INTERFACE)

target_sources(m10jtag INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/M10JTAG/src/M10JTAG.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/M10JTAG/src/M10JTAG.h"
)

target_include_directories(m10jtag INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/M10JTAG/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(m10jtag INTERFACE
    arduino-compat
)
