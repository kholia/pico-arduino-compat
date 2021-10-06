add_library(arancino INTERFACE)

target_sources(arancino INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/arancino-library/src/Arancino.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arancino-library/src/Arancino.h"
  "${CMAKE_CURRENT_LIST_DIR}/arancino-library/src/ArancinoConfig.h"
)

target_include_directories(arancino INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/arancino-library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(arancino INTERFACE
    arduino-compat
)
