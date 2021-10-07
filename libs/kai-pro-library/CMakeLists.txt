add_library(pac-kai-pro-library INTERFACE)

target_sources(pac-kai-pro-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/KAI-Pro/src/KAIpro.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/KAI-Pro/src/KAIpro.h"
)

target_include_directories(pac-kai-pro-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/KAI-Pro/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-kai-pro-library INTERFACE
    arduino-compat
)
