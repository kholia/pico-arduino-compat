add_library(pac-brasilino INTERFACE)

target_sources(pac-brasilino INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Brasilino/src/Brasilino.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Brasilino/src/Brasilino.h"
)

target_include_directories(pac-brasilino INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Brasilino/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-brasilino INTERFACE
    arduino-compat
)
