add_library(brief INTERFACE)

target_sources(brief INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/BriefEmbedded/src/Brief.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/BriefEmbedded/src/Brief.h"
)

target_include_directories(brief INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/BriefEmbedded/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(brief INTERFACE
    arduino-compat
)
