add_library(pac-mstimer2 INTERFACE)

target_sources(pac-mstimer2 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MsTimer2/MsTimer2.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MsTimer2/MsTimer2.h"
)

target_include_directories(pac-mstimer2 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MsTimer2"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-mstimer2 INTERFACE
    arduino-compat
)
