add_library(lixie-ii INTERFACE)

target_sources(lixie-ii INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Lixie_II/src/Lixie_II.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Lixie_II/src/Lixie_II.h"
)

target_include_directories(lixie-ii INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Lixie_II/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(lixie-ii INTERFACE
    arduino-compat
)
