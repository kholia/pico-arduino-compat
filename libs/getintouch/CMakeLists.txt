add_library(pac-getintouch INTERFACE)

target_sources(pac-getintouch INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-GetInTouch-library/src/GetInTouch.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-GetInTouch-library/src/GetInTouch.h"
)

target_include_directories(pac-getintouch INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Arduino-GetInTouch-library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-getintouch INTERFACE
    arduino-compat
)
