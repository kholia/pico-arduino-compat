add_library(pac-mrm-ir-finder-can INTERFACE)

target_sources(pac-mrm-ir-finder-can INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/mrm-ir-finder-can/src/mrm-ir-finder-can.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/mrm-ir-finder-can/src/mrm-ir-finder-can.h"
)

target_include_directories(pac-mrm-ir-finder-can INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/mrm-ir-finder-can/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-mrm-ir-finder-can INTERFACE
    arduino-compat
)
