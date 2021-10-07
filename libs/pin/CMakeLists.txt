add_library(pac-pin INTERFACE)

target_sources(pac-pin INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Pin/src/PinGroup.h"
  "${CMAKE_CURRENT_LIST_DIR}/Pin/src/Pin.h"
)

target_include_directories(pac-pin INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Pin/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-pin INTERFACE
    arduino-compat
)
