add_library(pac-eztime INTERFACE)

target_sources(pac-eztime INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ezTime/src/ezTime.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ezTime/src/ezTime.h"
)

target_include_directories(pac-eztime INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ezTime/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-eztime INTERFACE
    arduino-compat
)
