add_library(ddc-ci-vpc-library INTERFACE)

target_sources(ddc-ci-vpc-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ddcvcp/src/DDCVCP.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ddcvcp/src/DDCVCP.h"
)

target_include_directories(ddc-ci-vpc-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ddcvcp/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(ddc-ci-vpc-library INTERFACE
    arduino-compat
)
