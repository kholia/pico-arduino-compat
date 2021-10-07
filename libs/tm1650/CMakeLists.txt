add_library(pac-tm1650 INTERFACE)

target_sources(pac-tm1650 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TM1650/src/TM1650.h"
)

target_include_directories(pac-tm1650 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TM1650/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-tm1650 INTERFACE
    arduino-compat
)
