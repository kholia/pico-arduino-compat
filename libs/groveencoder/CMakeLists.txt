add_library(groveencoder INTERFACE)

target_sources(groveencoder INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/GroveEncoder/GroveEncoder.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/GroveEncoder/GroveEncoder.h"
)

target_include_directories(groveencoder INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/GroveEncoder"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(groveencoder INTERFACE
    arduino-compat
)
