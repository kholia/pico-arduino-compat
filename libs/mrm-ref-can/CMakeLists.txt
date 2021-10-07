add_library(pac-mrm-ref-can INTERFACE)

target_sources(pac-mrm-ref-can INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/mrm-ref-can/src/mrm-ref-can.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/mrm-ref-can/src/mrm-ref-can.h"
)

target_include_directories(pac-mrm-ref-can INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/mrm-ref-can/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-mrm-ref-can INTERFACE
    arduino-compat
)
