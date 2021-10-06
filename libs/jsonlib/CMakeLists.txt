add_library(jsonlib INTERFACE)

target_sources(jsonlib INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/jsonlib/jsonlib.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/jsonlib/jsonlib.h"
)

target_include_directories(jsonlib INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/jsonlib"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(jsonlib INTERFACE
    arduino-compat
)
