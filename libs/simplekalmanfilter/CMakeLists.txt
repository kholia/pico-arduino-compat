add_library(pac-simplekalmanfilter INTERFACE)

target_sources(pac-simplekalmanfilter INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SimpleKalmanFilter/src/SimpleKalmanFilter.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SimpleKalmanFilter/src/SimpleKalmanFilter.h"
)

target_include_directories(pac-simplekalmanfilter INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SimpleKalmanFilter/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-simplekalmanfilter INTERFACE
    arduino-compat
)
