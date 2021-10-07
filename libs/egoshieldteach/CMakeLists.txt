add_library(pac-egoshieldteach INTERFACE)

target_sources(pac-egoshieldteach INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/egoShieldTeach/src/egoShieldTeach.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/egoShieldTeach/src/egoShieldTeach.h"
)

target_include_directories(pac-egoshieldteach INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/egoShieldTeach/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-egoshieldteach INTERFACE
    arduino-compat
)
