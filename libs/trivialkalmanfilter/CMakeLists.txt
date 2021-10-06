add_library(trivialkalmanfilter INTERFACE)

target_sources(trivialkalmanfilter INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TrivialKalmanFilter/src/TrivialKalmanFilter.h"
)

target_include_directories(trivialkalmanfilter INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TrivialKalmanFilter/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(trivialkalmanfilter INTERFACE
    arduino-compat
)
