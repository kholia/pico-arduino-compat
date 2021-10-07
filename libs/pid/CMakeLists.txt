add_library(pac-pid INTERFACE)

target_sources(pac-pid INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-PID-Library/PID_v1.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-PID-Library/PID_v1.h"
)

target_include_directories(pac-pid INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Arduino-PID-Library"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-pid INTERFACE
    arduino-compat
)
