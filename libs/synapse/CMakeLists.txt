add_library(synapse INTERFACE)

target_sources(synapse INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/synapse/Synapse.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/synapse/examples/SynaBLE/CurieMIDI.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/synapse/Synapse.h"
  "${CMAKE_CURRENT_LIST_DIR}/synapse/examples/SynaBLE/CurieMIDI.h"
)

target_include_directories(synapse INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/synapse"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(synapse INTERFACE
    arduino-compat
)
