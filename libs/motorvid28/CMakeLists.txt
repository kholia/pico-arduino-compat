add_library(pac-motorvid28 INTERFACE)

target_sources(pac-motorvid28 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/VID28/src/MotorVID28.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/VID28/src/util/util.c"
  "${CMAKE_CURRENT_LIST_DIR}/VID28/src/MotorVID28.h"
  "${CMAKE_CURRENT_LIST_DIR}/VID28/src/util/util.h"
)

target_include_directories(pac-motorvid28 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/VID28/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-motorvid28 INTERFACE
    arduino-compat
)
