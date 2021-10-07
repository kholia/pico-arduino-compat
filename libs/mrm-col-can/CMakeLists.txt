add_library(pac-mrm-col-can INTERFACE)

target_sources(pac-mrm-col-can INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/mrm-col-can/src/mrm-col-can.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/mrm-col-can/src/mrm-col-can.h"
)

target_include_directories(pac-mrm-col-can INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/mrm-col-can/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-mrm-col-can INTERFACE
    arduino-compat
)
