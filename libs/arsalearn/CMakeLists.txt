add_library(pac-arsalearn INTERFACE)

target_sources(pac-arsalearn INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Arsa-Main/src/arsalearn.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arsa-Main/src/arsalearn.h"
)

target_include_directories(pac-arsalearn INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Arsa-Main/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-arsalearn INTERFACE
    arduino-compat
)
