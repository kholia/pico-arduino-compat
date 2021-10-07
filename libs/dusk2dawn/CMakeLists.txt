add_library(pac-dusk2dawn INTERFACE)

target_sources(pac-dusk2dawn INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Dusk2Dawn/Dusk2Dawn.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Dusk2Dawn/Dusk2Dawn.h"
)

target_include_directories(pac-dusk2dawn INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Dusk2Dawn"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-dusk2dawn INTERFACE
    arduino-compat
)
