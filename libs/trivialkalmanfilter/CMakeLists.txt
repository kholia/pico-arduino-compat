add_library(pac-trivialkalmanfilter INTERFACE)

target_sources(pac-trivialkalmanfilter INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TrivialKalmanFilter/src/TrivialKalmanFilter.h"
)

target_include_directories(pac-trivialkalmanfilter INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TrivialKalmanFilter/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-trivialkalmanfilter INTERFACE
    arduino-compat
)
