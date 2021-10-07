add_library(pac-podenosim INTERFACE)

target_sources(pac-podenosim INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/PodEnoSim/src/PodEnoSim.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/PodEnoSim/src/PodEnoSim.h"
)

target_include_directories(pac-podenosim INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/PodEnoSim/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-podenosim INTERFACE
    arduino-compat
)
