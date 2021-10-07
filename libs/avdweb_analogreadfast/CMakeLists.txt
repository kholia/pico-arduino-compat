add_library(pac-avdweb_analogreadfast INTERFACE)

target_sources(pac-avdweb_analogreadfast INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/avdweb_AnalogReadFast/avdweb_AnalogReadFast.h"
)

target_include_directories(pac-avdweb_analogreadfast INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/avdweb_AnalogReadFast"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-avdweb_analogreadfast INTERFACE
    arduino-compat
)
