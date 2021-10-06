add_library(arest-ui INTERFACE)

target_sources(arest-ui INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/aREST_UI/aREST_UI.h"
)

target_include_directories(arest-ui INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/aREST_UI"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(arest-ui INTERFACE
    arduino-compat
)
