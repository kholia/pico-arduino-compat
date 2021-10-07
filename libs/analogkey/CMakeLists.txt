add_library(pac-analogkey INTERFACE)

target_sources(pac-analogkey INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/AnalogKey/src/AnalogKey.h"
)

target_include_directories(pac-analogkey INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/AnalogKey/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-analogkey INTERFACE
    arduino-compat
)
