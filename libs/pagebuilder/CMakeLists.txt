add_library(pagebuilder INTERFACE)

target_sources(pagebuilder INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/PageBuilder/src/PageBuilder.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/PageBuilder/src/PageStream.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/PageBuilder/src/PageBuilder.h"
  "${CMAKE_CURRENT_LIST_DIR}/PageBuilder/src/PageStream.h"
  "${CMAKE_CURRENT_LIST_DIR}/PageBuilder/examples/WebLED/WebLED.h"
)

target_include_directories(pagebuilder INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/PageBuilder/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pagebuilder INTERFACE
    arduino-compat
)
