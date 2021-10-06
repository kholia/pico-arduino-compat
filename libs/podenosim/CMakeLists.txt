add_library(podenosim INTERFACE)

target_sources(podenosim INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/PodEnoSim/src/PodEnoSim.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/PodEnoSim/src/PodEnoSim.h"
)

target_include_directories(podenosim INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/PodEnoSim/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(podenosim INTERFACE
    arduino-compat
)
