add_library(pac-motomama-library INTERFACE)

target_sources(pac-motomama-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MotoMamaLib/src/MotoMamaLib.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MotoMamaLib/src/MotoMamaLib.h"
)

target_include_directories(pac-motomama-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MotoMamaLib/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-motomama-library INTERFACE
    arduino-compat
)
