add_library(pac-synapse INTERFACE)

target_sources(pac-synapse INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/synapse/Synapse.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/synapse/examples/SynaBLE/CurieMIDI.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/synapse/Synapse.h"
  "${CMAKE_CURRENT_LIST_DIR}/synapse/examples/SynaBLE/CurieMIDI.h"
)

target_include_directories(pac-synapse INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/synapse"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-synapse INTERFACE
    arduino-compat
)
