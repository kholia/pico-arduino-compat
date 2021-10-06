add_library(fugps-library INTERFACE)

target_sources(fugps-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/FuGPS/src/FuGPS.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FuGPS/src/FuGPS.h"
)

target_include_directories(fugps-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/FuGPS/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(fugps-library INTERFACE
    arduino-compat
)
