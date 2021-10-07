add_library(pac-mrm-ir-finder3 INTERFACE)

target_sources(pac-mrm-ir-finder3 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/mrm-ir-finder3/src/mrm-ir-finder3.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/mrm-ir-finder3/src/mrm-ir-finder3.h"
)

target_include_directories(pac-mrm-ir-finder3 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/mrm-ir-finder3/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-mrm-ir-finder3 INTERFACE
    arduino-compat
)
