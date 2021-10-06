add_library(conductivitylib INTERFACE)

target_sources(conductivitylib INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/conductivityLib/src/conductivityLib.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/conductivityLib/src/conductivityLib.h"
)

target_include_directories(conductivitylib INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/conductivityLib/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(conductivitylib INTERFACE
    arduino-compat
)
