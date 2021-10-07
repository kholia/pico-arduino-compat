add_library(pac-qlist INTERFACE)

target_sources(pac-qlist INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/QList/src/QList.h"
)

target_include_directories(pac-qlist INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/QList/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-qlist INTERFACE
    arduino-compat
)
