add_library(attouch INTERFACE)

target_sources(attouch INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/AtTouch/AtTouch.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AtTouch/AtTouch.h"
)

target_include_directories(attouch INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/AtTouch"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(attouch INTERFACE
    arduino-compat
)
