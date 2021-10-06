add_library(kai-pro-library INTERFACE)

target_sources(kai-pro-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/KAI-Pro/src/KAIpro.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/KAI-Pro/src/KAIpro.h"
)

target_include_directories(kai-pro-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/KAI-Pro/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(kai-pro-library INTERFACE
    arduino-compat
)
