add_library(pac-optodebounce INTERFACE)

target_sources(pac-optodebounce INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/OptocouplerDebouncer/src/OptoDebounce.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/OptocouplerDebouncer/src/OptoDebounce.h"
)

target_include_directories(pac-optodebounce INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/OptocouplerDebouncer/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-optodebounce INTERFACE
    arduino-compat
)
