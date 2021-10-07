add_library(pac-analogcomp INTERFACE)

target_sources(pac-analogcomp INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/analogComp/analogComp.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/analogComp/analogComp.h"
)

target_include_directories(pac-analogcomp INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/analogComp"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-analogcomp INTERFACE
    arduino-compat
)
