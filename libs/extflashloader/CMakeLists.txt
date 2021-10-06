add_library(extflashloader INTERFACE)

target_sources(extflashloader INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ExtFlashLoader/src/ExtFlashLoader.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/ExtFlashLoader/src/ExtFlashLoader.h"
  "${CMAKE_CURRENT_LIST_DIR}/ExtFlashLoader/examples/WriteSampleMenu/menu_data.h"
)

target_include_directories(extflashloader INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ExtFlashLoader/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(extflashloader INTERFACE
    arduino-compat
)
