add_library(tachometer INTERFACE)

target_sources(tachometer INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Tachometer/src/Tachometer.h"
)

target_include_directories(tachometer INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Tachometer/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(tachometer INTERFACE
    arduino-compat
)
