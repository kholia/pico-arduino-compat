add_library(getintouch INTERFACE)

target_sources(getintouch INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-GetInTouch-library/src/GetInTouch.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-GetInTouch-library/src/GetInTouch.h"
)

target_include_directories(getintouch INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Arduino-GetInTouch-library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(getintouch INTERFACE
    arduino-compat
)
