add_library(pac-rhio-lis2hh12 INTERFACE)

target_sources(pac-rhio-lis2hh12 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/rhio-LIS2HH12/src/rhio-LIS2HH12.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/rhio-LIS2HH12/examples/6d-position-example.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/rhio-LIS2HH12/examples/fifo-example.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/rhio-LIS2HH12/examples/basic-example.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/rhio-LIS2HH12/examples/application-example.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/rhio-LIS2HH12/examples/free-fall-example.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/rhio-LIS2HH12/examples/wake-up-example.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/rhio-LIS2HH12/examples/temp-Example.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/rhio-LIS2HH12/examples/hpf-example.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/rhio-LIS2HH12/examples/6D-movement-Example.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/rhio-LIS2HH12/src/rhio-LIS2HH12.h"
)

target_include_directories(pac-rhio-lis2hh12 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/rhio-LIS2HH12/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-rhio-lis2hh12 INTERFACE
    arduino-compat
)
