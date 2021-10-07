add_library(pac-groveencoder INTERFACE)

target_sources(pac-groveencoder INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/GroveEncoder/GroveEncoder.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/GroveEncoder/GroveEncoder.h"
)

target_include_directories(pac-groveencoder INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/GroveEncoder"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-groveencoder INTERFACE
    arduino-compat
)
