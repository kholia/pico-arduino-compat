add_library(pac-pu2clr-si4844 INTERFACE)

target_sources(pac-pu2clr-si4844 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SI4844/SI4844.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SI4844/SI4844.h"
)

target_include_directories(pac-pu2clr-si4844 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SI4844"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-pu2clr-si4844 INTERFACE
    arduino-compat
)
