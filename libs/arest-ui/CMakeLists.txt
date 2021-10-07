add_library(pac-arest-ui INTERFACE)

target_sources(pac-arest-ui INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/aREST_UI/aREST_UI.h"
)

target_include_directories(pac-arest-ui INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/aREST_UI"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-arest-ui INTERFACE
    arduino-compat
)
