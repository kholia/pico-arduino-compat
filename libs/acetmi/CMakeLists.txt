add_library(pac-acetmi INTERFACE)

target_sources(pac-acetmi INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/AceTMI/src/AceTMI.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceTMI/src/ace_tmi/SimpleTmiInterface.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceTMI/src/ace_tmi/SimpleTmiFastInterface.h"
)

target_include_directories(pac-acetmi INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/AceTMI/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-acetmi INTERFACE
    arduino-compat
)
