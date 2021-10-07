add_library(pac-ehajo-lm75-addon-board INTERFACE)

target_sources(pac-ehajo-lm75-addon-board INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/LM75B/src/eHaJo_LM75.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LM75B/src/eHaJo_LM75.h"
)

target_include_directories(pac-ehajo-lm75-addon-board INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/LM75B/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-ehajo-lm75-addon-board INTERFACE
    arduino-compat
)
