add_library(pac-avdweb_virtualdelay INTERFACE)

target_sources(pac-avdweb_virtualdelay INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/VirtualDelay/avdweb_VirtualDelay.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/VirtualDelay/avdweb_VirtualDelay.h"
)

target_include_directories(pac-avdweb_virtualdelay INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/VirtualDelay"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-avdweb_virtualdelay INTERFACE
    arduino-compat
)
