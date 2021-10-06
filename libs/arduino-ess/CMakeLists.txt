add_library(arduino-ess INTERFACE)

target_sources(arduino-ess INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/arduino-ess/sensirion_ess.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-ess/sensirion_ess.h"
)

target_include_directories(arduino-ess INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/arduino-ess"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(arduino-ess INTERFACE
    arduino-compat
)
