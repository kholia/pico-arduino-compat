add_library(uselesslib INTERFACE)

target_sources(uselesslib INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/UselessLib/src/UselessLib.h"
)

target_include_directories(uselesslib INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/UselessLib/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(uselesslib INTERFACE
    arduino-compat
)
