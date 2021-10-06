add_library(arest INTERFACE)

target_sources(arest INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/aREST/aREST.h"
)

target_include_directories(arest INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/aREST"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(arest INTERFACE
    arduino-compat
)
