add_library(pac-unistep2 INTERFACE)

target_sources(pac-unistep2 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Unistep2/src/Unistep2.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Unistep2/src/Unistep2.h"
)

target_include_directories(pac-unistep2 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Unistep2/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-unistep2 INTERFACE
    arduino-compat
)
