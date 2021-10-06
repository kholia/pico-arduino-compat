add_library(kalman INTERFACE)

target_sources(kalman INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Kalman/Kalman.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Kalman/Kalman.h"
)

target_include_directories(kalman INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Kalman"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(kalman INTERFACE
    arduino-compat
)
