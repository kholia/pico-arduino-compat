add_library(bolder-flight-systems-ublox INTERFACE)

target_sources(bolder-flight-systems-ublox INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/UBLOX/include/ublox/ublox.h"
)

target_include_directories(bolder-flight-systems-ublox INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/UBLOX/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(bolder-flight-systems-ublox INTERFACE
    arduino-compat
)
