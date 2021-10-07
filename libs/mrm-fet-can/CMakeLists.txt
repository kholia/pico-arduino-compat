add_library(pac-mrm-fet-can INTERFACE)

target_sources(pac-mrm-fet-can INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/mrm-fet-can/src/mrm-fet-can.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/mrm-fet-can/src/mrm-fet-can.h"
)

target_include_directories(pac-mrm-fet-can INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/mrm-fet-can/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-mrm-fet-can INTERFACE
    arduino-compat
)
