add_library(pulsecom INTERFACE)

target_sources(pulsecom INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/PulseCom/src/PulseCom.h"
  "${CMAKE_CURRENT_LIST_DIR}/PulseCom/examples/ParktronicData/src/PulseCom.h"
)

target_include_directories(pulsecom INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/PulseCom/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pulsecom INTERFACE
    arduino-compat
)
