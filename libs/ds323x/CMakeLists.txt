add_library(ds323x INTERFACE)

target_sources(ds323x INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/DS323x/DS323x.h"
  "${CMAKE_CURRENT_LIST_DIR}/DS323x/DateTime.h"
)

target_include_directories(ds323x INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/DS323x"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(ds323x INTERFACE
    arduino-compat
)
