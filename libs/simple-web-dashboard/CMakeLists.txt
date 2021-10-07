add_library(pac-simple-web-dashboard INTERFACE)

target_sources(pac-simple-web-dashboard INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/esp-simple-web-dashboard/src/dashboard.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/esp-simple-web-dashboard/src/dashboard.h"
)

target_include_directories(pac-simple-web-dashboard INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/esp-simple-web-dashboard/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-simple-web-dashboard INTERFACE
    arduino-compat
)
