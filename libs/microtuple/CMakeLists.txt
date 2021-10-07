add_library(pac-microtuple INTERFACE)

target_sources(pac-microtuple INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MicroTuple/MicroTuple.h"
  "${CMAKE_CURRENT_LIST_DIR}/MicroTuple/microTuple.h"
)

target_include_directories(pac-microtuple INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MicroTuple"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-microtuple INTERFACE
    arduino-compat
)
