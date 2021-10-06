add_library(analogtouch INTERFACE)

target_sources(analogtouch INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/AnalogTouch/AnalogTouch.h"
)

target_include_directories(analogtouch INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/AnalogTouch"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(analogtouch INTERFACE
    arduino-compat
)
