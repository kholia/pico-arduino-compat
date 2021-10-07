add_library(pac-duetimer INTERFACE)

target_sources(pac-duetimer INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/DueTimer/DueTimer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DueTimer/DueTimer.h"
)

target_include_directories(pac-duetimer INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/DueTimer"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-duetimer INTERFACE
    arduino-compat
)
