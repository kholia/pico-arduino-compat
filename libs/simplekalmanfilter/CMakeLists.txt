add_library(simplekalmanfilter INTERFACE)

target_sources(simplekalmanfilter INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SimpleKalmanFilter/src/SimpleKalmanFilter.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SimpleKalmanFilter/src/SimpleKalmanFilter.h"
)

target_include_directories(simplekalmanfilter INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SimpleKalmanFilter/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(simplekalmanfilter INTERFACE
    arduino-compat
)
