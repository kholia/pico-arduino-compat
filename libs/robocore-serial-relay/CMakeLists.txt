add_library(robocore-serial-relay INTERFACE)

target_sources(robocore-serial-relay INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SerialRelay/SerialRelay.h"
)

target_include_directories(robocore-serial-relay INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SerialRelay"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(robocore-serial-relay INTERFACE
    arduino-compat
)
