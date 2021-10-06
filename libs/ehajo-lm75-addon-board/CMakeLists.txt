add_library(ehajo-lm75-addon-board INTERFACE)

target_sources(ehajo-lm75-addon-board INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/LM75B/src/eHaJo_LM75.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LM75B/src/eHaJo_LM75.h"
)

target_include_directories(ehajo-lm75-addon-board INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/LM75B/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(ehajo-lm75-addon-board INTERFACE
    arduino-compat
)
