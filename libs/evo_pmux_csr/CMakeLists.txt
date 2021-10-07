add_library(pac-evo_pmux_csr INTERFACE)

target_sources(pac-evo_pmux_csr INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/evo_pmux_csr/src/evo_pmux_csr.h"
)

target_include_directories(pac-evo_pmux_csr INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/evo_pmux_csr/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-evo_pmux_csr INTERFACE
    arduino-compat
)
