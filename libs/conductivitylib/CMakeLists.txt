add_library(pac-conductivitylib INTERFACE)

target_sources(pac-conductivitylib INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/conductivityLib/src/conductivityLib.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/conductivityLib/src/conductivityLib.h"
)

target_include_directories(pac-conductivitylib INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/conductivityLib/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-conductivitylib INTERFACE
    arduino-compat
)
