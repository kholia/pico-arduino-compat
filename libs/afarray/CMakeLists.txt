add_library(pac-afarray INTERFACE)

target_sources(pac-afarray INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/AFArray/AFArrayType.h"
  "${CMAKE_CURRENT_LIST_DIR}/AFArray/AFArray.h"
)

target_include_directories(pac-afarray INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/AFArray"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-afarray INTERFACE
    arduino-compat
)
