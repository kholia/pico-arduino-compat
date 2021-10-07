add_library(pac-tachometer INTERFACE)

target_sources(pac-tachometer INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Tachometer/src/Tachometer.h"
)

target_include_directories(pac-tachometer INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Tachometer/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-tachometer INTERFACE
    arduino-compat
)
