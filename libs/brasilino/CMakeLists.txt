add_library(brasilino INTERFACE)

target_sources(brasilino INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Brasilino/src/Brasilino.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Brasilino/src/Brasilino.h"
)

target_include_directories(brasilino INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Brasilino/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(brasilino INTERFACE
    arduino-compat
)
