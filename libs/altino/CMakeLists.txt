add_library(pac-altino INTERFACE)

target_sources(pac-altino INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/altino/src/Altino.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/altino/src/Altino.h"
)

target_include_directories(pac-altino INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/altino/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-altino INTERFACE
    arduino-compat
)
