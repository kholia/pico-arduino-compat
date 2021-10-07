add_library(pac-mrm-mot4x3.6can INTERFACE)

target_sources(pac-mrm-mot4x3.6can INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/mrm-mot4x3.6can/src/mrm-mot4x3.6can.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/mrm-mot4x3.6can/src/mrm-mot4x3.6can.h"
)

target_include_directories(pac-mrm-mot4x3.6can INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/mrm-mot4x3.6can/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-mrm-mot4x3.6can INTERFACE
    arduino-compat
)
