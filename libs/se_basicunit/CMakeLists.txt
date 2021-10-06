add_library(se_basicunit INTERFACE)

target_sources(se_basicunit INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/AlphaSE_BasicUnit/src/alphase_unit.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AlphaSE_BasicUnit/src/alphase_unit.h"
)

target_include_directories(se_basicunit INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/AlphaSE_BasicUnit/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(se_basicunit INTERFACE
    arduino-compat
)
