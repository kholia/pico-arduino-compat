add_library(pac-u-blox-gnss INTERFACE)

target_sources(pac-u-blox-gnss INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/u-blox_GNSS/src/ublox_GNSS.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/u-blox_GNSS/src/ublox_GNSS.h"
)

target_include_directories(pac-u-blox-gnss INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/u-blox_GNSS/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-u-blox-gnss INTERFACE
    arduino-compat
)
