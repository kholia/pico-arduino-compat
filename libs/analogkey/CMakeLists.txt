add_library(analogkey INTERFACE)

target_sources(analogkey INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/AnalogKey/src/AnalogKey.h"
)

target_include_directories(analogkey INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/AnalogKey/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(analogkey INTERFACE
    arduino-compat
)
