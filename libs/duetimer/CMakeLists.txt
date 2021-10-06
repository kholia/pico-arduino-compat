add_library(duetimer INTERFACE)

target_sources(duetimer INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/DueTimer/DueTimer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DueTimer/DueTimer.h"
)

target_include_directories(duetimer INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/DueTimer"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(duetimer INTERFACE
    arduino-compat
)
