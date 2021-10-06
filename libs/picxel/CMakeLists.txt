add_library(picxel INTERFACE)

target_sources(picxel INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/PICxel/PICxel.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/PICxel/PICxel.h"
)

target_include_directories(picxel INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/PICxel"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(picxel INTERFACE
    arduino-compat
)
