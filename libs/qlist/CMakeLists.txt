add_library(qlist INTERFACE)

target_sources(qlist INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/QList/src/QList.h"
)

target_include_directories(qlist INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/QList/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(qlist INTERFACE
    arduino-compat
)
