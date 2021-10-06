add_library(timealarms INTERFACE)

target_sources(timealarms INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TimeAlarms/TimeAlarms.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TimeAlarms/TimeAlarms.h"
)

target_include_directories(timealarms INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TimeAlarms"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(timealarms INTERFACE
    arduino-compat
)
