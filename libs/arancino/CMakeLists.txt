add_library(pac-arancino INTERFACE)

target_sources(pac-arancino INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/arancino-library/src/Arancino.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arancino-library/src/Arancino.h"
  "${CMAKE_CURRENT_LIST_DIR}/arancino-library/src/ArancinoConfig.h"
)

target_include_directories(pac-arancino INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/arancino-library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-arancino INTERFACE
    arduino-compat
)
