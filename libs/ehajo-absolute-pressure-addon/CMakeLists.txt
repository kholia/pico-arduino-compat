add_library(ehajo-absolute-pressure-addon INTERFACE)

target_sources(ehajo-absolute-pressure-addon INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/WSEN-PADS/src/eHaJo_WSEN_PADS.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/WSEN-PADS/src/eHaJo_WSEN_PADS.h"
)

target_include_directories(ehajo-absolute-pressure-addon INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/WSEN-PADS/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(ehajo-absolute-pressure-addon INTERFACE
    arduino-compat
)
