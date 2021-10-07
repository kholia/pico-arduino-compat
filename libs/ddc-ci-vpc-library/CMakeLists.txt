add_library(pac-ddc-ci-vpc-library INTERFACE)

target_sources(pac-ddc-ci-vpc-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ddcvcp/src/DDCVCP.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ddcvcp/src/DDCVCP.h"
)

target_include_directories(pac-ddc-ci-vpc-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ddcvcp/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-ddc-ci-vpc-library INTERFACE
    arduino-compat
)
