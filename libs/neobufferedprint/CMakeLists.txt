add_library(neobufferedprint INTERFACE)

target_sources(neobufferedprint INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/NeoBufferedPrint/NeoBufferedPrint.h"
)

target_include_directories(neobufferedprint INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/NeoBufferedPrint"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(neobufferedprint INTERFACE
    arduino-compat
)
