add_library(avdweb_analogreadfast INTERFACE)

target_sources(avdweb_analogreadfast INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/avdweb_AnalogReadFast/avdweb_AnalogReadFast.h"
)

target_include_directories(avdweb_analogreadfast INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/avdweb_AnalogReadFast"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(avdweb_analogreadfast INTERFACE
    arduino-compat
)
