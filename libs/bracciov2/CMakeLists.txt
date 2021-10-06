add_library(bracciov2 INTERFACE)

target_sources(bracciov2 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/BraccioV2/src/BraccioV2.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/BraccioV2/src/BraccioV2.h"
)

target_include_directories(bracciov2 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/BraccioV2/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(bracciov2 INTERFACE
    arduino-compat
)
