add_library(evo_build_template INTERFACE)

target_sources(evo_build_template INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/evo_build_template/src/evo_build.h"
)

target_include_directories(evo_build_template INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/evo_build_template/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(evo_build_template INTERFACE
    arduino-compat
)
