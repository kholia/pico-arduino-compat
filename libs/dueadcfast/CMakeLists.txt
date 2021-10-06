add_library(dueadcfast INTERFACE)

target_sources(dueadcfast INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/DueAdcFast/src/DueAdcFast.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DueAdcFast/src/DueAdcFast.h"
)

target_include_directories(dueadcfast INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/DueAdcFast/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(dueadcfast INTERFACE
    arduino-compat
)
