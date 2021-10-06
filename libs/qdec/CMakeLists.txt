add_library(qdec INTERFACE)

target_sources(qdec INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/QDEC/src/qdec.h"
)

target_include_directories(qdec INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/QDEC/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(qdec INTERFACE
    arduino-compat
)
