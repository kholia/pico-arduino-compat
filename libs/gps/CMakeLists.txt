add_library(gps INTERFACE)

target_sources(gps INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/GPS/GPS.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/GPS/GPS.h"
)

target_include_directories(gps INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/GPS"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(gps INTERFACE
    arduino-compat
)
