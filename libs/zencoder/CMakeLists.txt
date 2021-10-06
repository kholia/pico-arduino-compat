add_library(zencoder INTERFACE)

target_sources(zencoder INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ZEncoder/ZEncoder.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ZEncoder/ZEncoder.h"
)

target_include_directories(zencoder INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ZEncoder"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(zencoder INTERFACE
    arduino-compat
)
