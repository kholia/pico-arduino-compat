add_library(tridenttd_linenotify INTERFACE)

target_sources(tridenttd_linenotify INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TridentTD_LineNotify/src/TridentTD_LineNotify.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TridentTD_LineNotify/src/TridentTD_LineNotify.h"
)

target_include_directories(tridenttd_linenotify INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TridentTD_LineNotify/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(tridenttd_linenotify INTERFACE
    arduino-compat
)
