add_library(pac-qdec INTERFACE)

target_sources(pac-qdec INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/QDEC/src/qdec.h"
)

target_include_directories(pac-qdec INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/QDEC/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-qdec INTERFACE
    arduino-compat
)
