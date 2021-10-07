add_library(pac-attouch INTERFACE)

target_sources(pac-attouch INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/AtTouch/AtTouch.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AtTouch/AtTouch.h"
)

target_include_directories(pac-attouch INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/AtTouch"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-attouch INTERFACE
    arduino-compat
)
