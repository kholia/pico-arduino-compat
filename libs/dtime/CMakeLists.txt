add_library(pac-dtime INTERFACE)

target_sources(pac-dtime INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/DTime/DTime.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DTime/DTime.h"
)

target_include_directories(pac-dtime INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/DTime"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-dtime INTERFACE
    arduino-compat
)
