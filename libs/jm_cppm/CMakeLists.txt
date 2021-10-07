add_library(pac-jm_cppm INTERFACE)

target_sources(pac-jm_cppm INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/jm_CPPM/jm_CPPM.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/jm_CPPM/jm_CPPM.h"
)

target_include_directories(pac-jm_cppm INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/jm_CPPM"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-jm_cppm INTERFACE
    arduino-compat
)
