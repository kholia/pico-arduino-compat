add_library(pac-kalman-filter-library INTERFACE)

target_sources(pac-kalman-filter-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/KalmanFilter/Kalman.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/KalmanFilter/Kalman.h"
)

target_include_directories(pac-kalman-filter-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/KalmanFilter"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-kalman-filter-library INTERFACE
    arduino-compat
)
