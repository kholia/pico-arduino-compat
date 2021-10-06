add_library(pid INTERFACE)

target_sources(pid INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-PID-Library/PID_v1.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-PID-Library/PID_v1.h"
)

target_include_directories(pid INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Arduino-PID-Library"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pid INTERFACE
    arduino-compat
)
