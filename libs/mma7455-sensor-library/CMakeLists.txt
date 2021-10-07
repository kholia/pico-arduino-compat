add_library(pac-mma7455-sensor-library INTERFACE)

target_sources(pac-mma7455-sensor-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MMA7455/MMA7455.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MMA7455/MMA7455.h"
)

target_include_directories(pac-mma7455-sensor-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MMA7455"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-mma7455-sensor-library INTERFACE
    arduino-compat
)
