add_library(dtime INTERFACE)

target_sources(dtime INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/DTime/DTime.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DTime/DTime.h"
)

target_include_directories(dtime INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/DTime"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(dtime INTERFACE
    arduino-compat
)
