add_library(pac-md_lm335a INTERFACE)

target_sources(pac-md_lm335a INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MD_LM335A/src/MD_LM335A.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MD_LM335A/src/MD_LM335A.h"
)

target_include_directories(pac-md_lm335a INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MD_LM335A/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-md_lm335a INTERFACE
    arduino-compat
)
