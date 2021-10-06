add_library(microtuple INTERFACE)

target_sources(microtuple INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MicroTuple/MicroTuple.h"
  "${CMAKE_CURRENT_LIST_DIR}/MicroTuple/microTuple.h"
)

target_include_directories(microtuple INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MicroTuple"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(microtuple INTERFACE
    arduino-compat
)
