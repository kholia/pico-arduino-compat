add_library(pac-pulsecom INTERFACE)

target_sources(pac-pulsecom INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/PulseCom/src/PulseCom.h"
  "${CMAKE_CURRENT_LIST_DIR}/PulseCom/examples/ParktronicData/src/PulseCom.h"
)

target_include_directories(pac-pulsecom INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/PulseCom/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-pulsecom INTERFACE
    arduino-compat
)
