add_library(pac-basicencoder INTERFACE)

target_sources(pac-basicencoder INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/BasicEncoder/BasicEncoder.h"
)

target_include_directories(pac-basicencoder INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/BasicEncoder"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-basicencoder INTERFACE
    arduino-compat
)
