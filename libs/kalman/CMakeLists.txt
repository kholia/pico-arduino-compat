add_library(pac-kalman INTERFACE)

target_sources(pac-kalman INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Kalman/Kalman.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Kalman/Kalman.h"
)

target_include_directories(pac-kalman INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Kalman"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-kalman INTERFACE
    arduino-compat
)
