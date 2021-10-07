add_library(pac-custom-pid INTERFACE)

target_sources(pac-custom-pid INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Custom_PID/Custom_PID.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Custom_PID/Custom_PID.h"
)

target_include_directories(pac-custom-pid INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Custom_PID"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-custom-pid INTERFACE
    arduino-compat
)
