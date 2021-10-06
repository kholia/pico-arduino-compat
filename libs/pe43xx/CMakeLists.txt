add_library(pe43xx INTERFACE)

target_sources(pe43xx INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/PE43xx/src/PE43xx.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/PE43xx/src/PE43xx.h"
)

target_include_directories(pe43xx INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/PE43xx/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pe43xx INTERFACE
    arduino-compat
)
