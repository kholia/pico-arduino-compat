add_library(pac-mrm-mot4x10 INTERFACE)

target_sources(pac-mrm-mot4x10 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/mrm-mot4x10/src/mrm-mot4x10.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/mrm-mot4x10/src/mrm-mot4x10.h"
)

target_include_directories(pac-mrm-mot4x10 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/mrm-mot4x10/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-mrm-mot4x10 INTERFACE
    arduino-compat
)
