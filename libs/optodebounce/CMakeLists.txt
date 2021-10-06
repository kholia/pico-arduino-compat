add_library(optodebounce INTERFACE)

target_sources(optodebounce INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/OptocouplerDebouncer/src/OptoDebounce.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/OptocouplerDebouncer/src/OptoDebounce.h"
)

target_include_directories(optodebounce INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/OptocouplerDebouncer/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(optodebounce INTERFACE
    arduino-compat
)
