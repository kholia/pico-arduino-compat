add_library(motomama-library INTERFACE)

target_sources(motomama-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MotoMamaLib/src/MotoMamaLib.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MotoMamaLib/src/MotoMamaLib.h"
)

target_include_directories(motomama-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MotoMamaLib/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(motomama-library INTERFACE
    arduino-compat
)
