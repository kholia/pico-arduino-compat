add_library(eztime INTERFACE)

target_sources(eztime INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ezTime/src/ezTime.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ezTime/src/ezTime.h"
)

target_include_directories(eztime INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ezTime/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(eztime INTERFACE
    arduino-compat
)
