add_library(pac-bb_uc1701 INTERFACE)

target_sources(pac-bb_uc1701 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/bb_uc1701/src/bb_uc1701.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/bb_uc1701/src/bb_uc1701.h"
)

target_include_directories(pac-bb_uc1701 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/bb_uc1701/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-bb_uc1701 INTERFACE
    arduino-compat
)
