add_library(ibotx INTERFACE)

target_sources(ibotx INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/iBotX/src/iBotX.h"
)

target_include_directories(ibotx INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/iBotX/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(ibotx INTERFACE
    arduino-compat
)
