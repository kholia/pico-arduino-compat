add_library(pac-ibotx INTERFACE)

target_sources(pac-ibotx INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/iBotX/src/iBotX.h"
)

target_include_directories(pac-ibotx INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/iBotX/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-ibotx INTERFACE
    arduino-compat
)
