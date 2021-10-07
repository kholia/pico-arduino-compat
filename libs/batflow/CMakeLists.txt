add_library(pac-batflow INTERFACE)

target_sources(pac-batflow INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Batflow/Batflow.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Batflow/Batflow.h"
)

target_include_directories(pac-batflow INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Batflow"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-batflow INTERFACE
    arduino-compat
)
