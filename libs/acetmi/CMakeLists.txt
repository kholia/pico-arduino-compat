add_library(acetmi INTERFACE)

target_sources(acetmi INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/AceTMI/src/AceTMI.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceTMI/src/ace_tmi/SimpleTmiInterface.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceTMI/src/ace_tmi/SimpleTmiFastInterface.h"
)

target_include_directories(acetmi INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/AceTMI/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(acetmi INTERFACE
    arduino-compat
)
