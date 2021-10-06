add_library(embedui INTERFACE)

target_sources(embedui INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/EmbedUI-Library/EmbedUI.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EmbedUI-Library/EmbedUI.h"
)

target_include_directories(embedui INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/EmbedUI-Library"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(embedui INTERFACE
    arduino-compat
)
