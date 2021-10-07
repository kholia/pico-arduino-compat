add_library(pac-mrm-bldc2x50 INTERFACE)

target_sources(pac-mrm-bldc2x50 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/mrm-bldc2x50/src/mrm-bldc2x50.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/mrm-bldc2x50/src/mrm-bldc2x50.h"
)

target_include_directories(pac-mrm-bldc2x50 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/mrm-bldc2x50/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-mrm-bldc2x50 INTERFACE
    arduino-compat
)
