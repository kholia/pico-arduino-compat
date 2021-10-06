add_library(custom-pid INTERFACE)

target_sources(custom-pid INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Custom_PID/Custom_PID.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Custom_PID/Custom_PID.h"
)

target_include_directories(custom-pid INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Custom_PID"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(custom-pid INTERFACE
    arduino-compat
)
