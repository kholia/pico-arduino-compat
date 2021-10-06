add_library(jm_cppm INTERFACE)

target_sources(jm_cppm INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/jm_CPPM/jm_CPPM.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/jm_CPPM/jm_CPPM.h"
)

target_include_directories(jm_cppm INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/jm_CPPM"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(jm_cppm INTERFACE
    arduino-compat
)
