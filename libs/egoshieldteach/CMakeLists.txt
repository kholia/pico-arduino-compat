add_library(egoshieldteach INTERFACE)

target_sources(egoshieldteach INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/egoShieldTeach/src/egoShieldTeach.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/egoShieldTeach/src/egoShieldTeach.h"
)

target_include_directories(egoshieldteach INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/egoShieldTeach/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(egoshieldteach INTERFACE
    arduino-compat
)
