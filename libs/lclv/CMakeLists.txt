add_library(pac-lclv INTERFACE)

target_sources(pac-lclv INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/LCLV/LCLV.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LCLV/LCLV.h"
)

target_include_directories(pac-lclv INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/LCLV"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-lclv INTERFACE
    arduino-compat
)
