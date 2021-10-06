add_library(basicencoder INTERFACE)

target_sources(basicencoder INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/BasicEncoder/BasicEncoder.h"
)

target_include_directories(basicencoder INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/BasicEncoder"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(basicencoder INTERFACE
    arduino-compat
)
